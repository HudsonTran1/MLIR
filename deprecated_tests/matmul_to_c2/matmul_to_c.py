import math
import os

# ============================================================
# Stage 1: Define model & export to Torch-MLIR (linalg-on-tensors)
# ============================================================

def export_ffn_to_linalg(out_path="ffn_linalg.mlir"):
    import torch
    import torch.nn as nn
    from torch_mlir import fx
    from torch_mlir.fx import OutputType

    class ToyFFN(nn.Module):
        def __init__(self, d_model=512, d_ff=2048):
            super().__init__()
            self.up = nn.Linear(d_model, d_ff)
            self.down = nn.Linear(d_ff, d_model)

        def forward(self, x):
            return self.down(torch.relu(self.up(x)))

    model = ToyFFN().eval()
    example_input = torch.randn(1, 128, 512)

    module = fx.export_and_import(
        model, example_input, output_type=OutputType.LINALG_ON_TENSORS
    )

    with open(out_path, "w") as f:
        f.write(str(module))
    return out_path


# ============================================================
# Stage 2: Clean up IR
# ============================================================

def clean_ir(in_path="ffn_linalg.mlir", out_path="ffn_clean.mlir"):
    from torch_mlir.ir import Context, Module
    from torch_mlir.passmanager import PassManager

    with open(in_path) as f:
        ir_text = f.read()

    with Context() as ctx:
        module = Module.parse(ir_text)
        pm = PassManager.parse("builtin.module(canonicalize,cse)")
        pm.run(module.operation)
        with open(out_path, "w") as f:
            f.write(str(module))

    return out_path


# ============================================================
# Stage 3: Walk IR & Extract Matmul Shapes
# ============================================================

def extract_matmul_shapes(mlir_path="ffn_clean.mlir"):
    from torch_mlir.ir import Context, Module, RankedTensorType

    with open(mlir_path) as f:
        ir_text = f.read()

    shapes = []

    with Context() as ctx:
        module = Module.parse(ir_text)

        def walk(op):
            if op.name == "linalg.matmul":
                lhs = RankedTensorType(op.operands[0].type)
                rhs = RankedTensorType(op.operands[1].type)
                M, K = lhs.shape[-2], lhs.shape[-1]
                N = rhs.shape[-1]
                shapes.append((M, K, N))
            for region in op.regions:
                for block in region.blocks:
                    for inner_op in block.operations:
                        walk(inner_op)

        walk(module.operation)

    return shapes


ROLES = [
    {"stage": "up_proj",   "weight": "W1", "bias": "b1", "in": "X", "out": "H"},
    {"stage": "down_proj", "weight": "W2", "bias": "b2", "in": "H", "out": "Y"},
]


# ============================================================
# Stage 4: Layout & Tiling Schedule Generators
# ============================================================

def build_layout(matmul_shapes, roles, num_vaults=8, elem_bytes=4):
    M_total = matmul_shapes[0][0]
    assert M_total % num_vaults == 0, "M must divide evenly across vaults"
    rows_per_vault = M_total // num_vaults

    layout = {}
    offset = 0
    for (M, K, N), role in zip(matmul_shapes, roles):
        w_size = K * N * elem_bytes
        b_size = N * elem_bytes
        layout[role["weight"]] = {"base": offset, "size": w_size, "width": N}
        offset += w_size
        layout[role["bias"]] = {"base": offset, "size": b_size, "width": N}
        offset += b_size

    K0 = matmul_shapes[0][1]
    N0 = matmul_shapes[0][2]
    N1 = matmul_shapes[1][2]
    for name, width in [(roles[0]["in"], K0), (roles[0]["out"], N0), (roles[1]["out"], N1)]:
        if name in layout:
            continue
        size = rows_per_vault * width * elem_bytes
        layout[name] = {"base": offset, "size": size, "width": width}
        offset += size

    return layout, rows_per_vault, offset


def generate_vault_schedule(matmul_shapes, roles, num_vaults, target_vault_id, tile=32, elem_bytes=4):
    layout, rows_per_vault, total_bytes = build_layout(matmul_shapes, roles, num_vaults, elem_bytes)
    
    instrs = []
    for (M, K, N), role in zip(matmul_shapes, roles):
        n_n, n_k = math.ceil(N / tile), math.ceil(K / tile)
        w_base, w_width = layout[role["weight"]]["base"], layout[role["weight"]]["width"]
        b_base = layout[role["bias"]]["base"]
        a_base = layout[role["in"]]["base"]
        o_base = layout[role["out"]]["base"]

        for j in range(n_n):
            for k in range(n_k):
                w_addr = w_base + (k * tile * w_width + j * tile) * elem_bytes
                a_addr = a_base + (k * tile) * elem_bytes
                
                instrs.append({
                    "stage": role["stage"], "op": "TILE_MAC", 
                    "w_addr": w_addr, "a_addr": a_addr,
                    "tile_m": rows_per_vault, "tile_k": tile, "tile_n": tile,
                    "clear_acc": (k == 0)
                })

            o_addr = o_base + (j * tile) * elem_bytes
            b_addr = b_base + (j * tile) * elem_bytes
            instrs.append({
                "stage": role["stage"], "op": "TILE_DRAIN_BIAS",
                "o_addr": o_addr, "b_addr": b_addr,
                "tile_m": rows_per_vault, "tile_n": tile
            })

    return instrs, rows_per_vault, total_bytes


# ============================================================
# Stage 5: Fixed CGen Automation with SST Vanadis Bootloader
# ============================================================

def auto_cgen_vault(matmul_shapes, roles, target_vault_id=0, num_vaults=8, tile=32, elem_bytes=4):
    import cgen

    instructions, rows_per_vault, total_bytes = generate_vault_schedule(
        matmul_shapes, roles, num_vaults, target_vault_id, tile, elem_bytes
    )

    output_filename = f"vault_{target_vault_id}_driver.c"

    # --- 1. Top Section: Bootloader & _start (Links at 0x10000) ---
    c_top_definitions = [
        cgen.Comment(f"Auto-generated Executable Driver for Vault {target_vault_id}"),
        cgen.Include("stdio.h"),
        cgen.Include("stdlib.h"),
        cgen.Include("stdint.h"),
        cgen.Include("stdbool.h"),
        cgen.Include("string.h"),
        cgen.Line(),
        cgen.Statement("#ifndef SYS_exit_group\n#define SYS_exit_group 94\n#endif"),
        cgen.Line(),
        cgen.Define("TARGET_VAULT_ID", str(target_vault_id)),
        cgen.Define("VAULT_DRAM_BYTES", str(total_bytes)),
        cgen.Define("ROWS_PER_VAULT", str(rows_per_vault)),
        cgen.Line(),
        cgen.Statement("int main(void)"),
        cgen.Statement("void force_exit_group(int status)"),
        cgen.Statement("extern char __ram"),
        cgen.Line(),
        cgen.Comment("=============================================================================="),
        cgen.Comment("1. Core Entry Point (Placed at top so it links at 0x10000)"),
        cgen.Comment("=============================================================================="),
        cgen.Statement(
            '__attribute__((naked, used))\n'
            'void _start(void) {\n'
            '    __asm__ __volatile__(\n'
            '        ".option push\\n\\t"\n'
            '        ".option norvc\\n\\t"\n'
            '        "la sp, __ram\\n\\t"\n'
            '        "li t0, 0x00080000\\n\\t"\n'
            '        "add sp, sp, t0\\n\\t"\n'
            '        "mv a0, zero\\n\\t"\n'
            '        "mv a1, zero\\n\\t"\n'
            '        "call main\\n\\t"\n'
            '        "tail force_exit_group\\n\\t"\n'
            '        ".option pop\\n\\t"\n'
            '    );\n'
            '}'
        ),
        cgen.Line(),
        cgen.FunctionBody(
            cgen.FunctionDeclaration(
                cgen.Value("void", "force_exit_group"),
                [cgen.Value("int", "status")]
            ),
            cgen.Block([
                cgen.Statement(
                    '#if defined(__riscv)\n'
                    '    register long a0 __asm__("a0") = status;\n'
                    '    register long a7 __asm__("a7") = SYS_exit_group;\n'
                    '    __asm__ __volatile__("ecall" : : "r"(a0), "r"(a7) : "memory");\n'
                    '#elif defined(__mips__)\n'
                    '    register long a0 __asm__("$4") = status;\n'
                    '    register long v0 __asm__("$2") = SYS_exit_group;\n'
                    '    __asm__ __volatile__("syscall" : : "r"(a0), "r"(v0) : "memory");\n'
                    '#endif\n'
                    '    while (1);'
                )
            ])
        ),
        cgen.Line()
    ]

    # --- 2. Micro-Kernels & State ---
    mac_kernel = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("static inline void", "tile_mac_kernel"),
            [
                cgen.Value("float *", "dram"),
                cgen.Value("uint32_t", "w_offset"),
                cgen.Value("uint32_t", "a_offset"),
                cgen.Value("int", "tile_m"),
                cgen.Value("int", "tile_k"),
                cgen.Value("int", "tile_n"),
                cgen.Value("bool", "clear_acc")
            ]
        ),
        cgen.Block([
            cgen.Statement("if (clear_acc) memset(systolic_acc, 0, sizeof(systolic_acc))"),
            cgen.Statement("float *W = (float *)&dram[w_offset]"),
            cgen.Statement("float *A = (float *)&dram[a_offset]"),
            cgen.For("int m = 0", "m < tile_m", "m++",
                cgen.For("int n = 0", "n < tile_n", "n++",
                    cgen.For("int k = 0", "k < tile_k", "k++",
                        cgen.Statement("systolic_acc[m][n] += A[m * tile_k + k] * W[k * tile_n + n]")
                    )
                )
            )
        ])
    )

    drain_bias_kernel = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("static inline void", "tile_drain_bias_kernel"),
            [
                cgen.Value("float *", "dram"),
                cgen.Value("uint32_t", "o_offset"),
                cgen.Value("uint32_t", "b_offset"),
                cgen.Value("int", "tile_m"),
                cgen.Value("int", "tile_n")
            ]
        ),
        cgen.Block([
            cgen.Statement("float *Out = (float *)&dram[o_offset]"),
            cgen.Statement("float *Bias = (float *)&dram[b_offset]"),
            cgen.For("int m = 0", "m < tile_m", "m++",
                cgen.For("int n = 0", "n < tile_n", "n++",
                    cgen.Statement("Out[m * tile_n + n] = systolic_acc[m][n] + Bias[n]")
                )
            )
        ])
    )

    # --- 3. Unroll Schedule ---
    c_unrolled_calls = []
    for i, inst in enumerate(instructions):
        if inst["op"] == "TILE_MAC":
            clear_acc = "true" if inst["clear_acc"] else "false"
            c_unrolled_calls.append(cgen.Comment(f"Step {i:03d}: [{inst['stage']}] Tile MAC"))
            c_unrolled_calls.append(cgen.Statement(
                f"tile_mac_kernel(vault_dram, 0x{inst['w_addr']:08X}U, 0x{inst['a_addr']:08X}U, "
                f"{inst['tile_m']}, {inst['tile_k']}, {inst['tile_n']}, {clear_acc})"
            ))
        elif inst["op"] == "TILE_DRAIN_BIAS":
            c_unrolled_calls.append(cgen.Comment(f"Step {i:03d}: [{inst['stage']}] Drain Accumulator & Add Bias"))
            c_unrolled_calls.append(cgen.Statement(
                f"tile_drain_bias_kernel(vault_dram, 0x{inst['o_addr']:08X}U, 0x{inst['b_addr']:08X}U, "
                f"{inst['tile_m']}, {inst['tile_n']})"
            ))

    # --- 4. Main Entry Function ---
    c_main_function = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("int", "main"),
            []
        ),
        cgen.Block([
            cgen.Statement(f"execute_vault_{target_vault_id}_schedule((float *)g_dram_buffer)"),
            cgen.Statement("return 0")
        ])
    )

    # Assemble complete file
    c_file_ast = cgen.Module([
        *c_top_definitions,
        cgen.Statement(f"static float systolic_acc[{rows_per_vault}][{tile}]"),
        cgen.Statement("static uint8_t g_dram_buffer[VAULT_DRAM_BYTES] __attribute__((aligned(16)))"),
        cgen.Line(),
        mac_kernel,
        cgen.Line(),
        drain_bias_kernel,
        cgen.Line(),
        cgen.FunctionBody(
            cgen.FunctionDeclaration(
                cgen.Value("void", f"execute_vault_{target_vault_id}_schedule"),
                [cgen.Value("float *", "vault_dram")]
            ),
            cgen.Block(c_unrolled_calls)
        ),
        cgen.Line(),
        c_main_function
    ])

    with open(output_filename, "w") as f:
        f.write(str(c_file_ast))

    print(f"Generated SST-ready C driver: {output_filename}")


if __name__ == "__main__":
    TARGET_VAULT_ID = 0
    NUM_VAULTS = 8
    TILE = 32
    ELEM_BYTES = 4

    export_ffn_to_linalg("ffn_linalg.mlir")
    clean_ir("ffn_linalg.mlir", "ffn_clean.mlir")
    matmul_shapes = extract_matmul_shapes("ffn_clean.mlir")

    auto_cgen_vault(
        matmul_shapes=matmul_shapes,
        roles=ROLES,
        target_vault_id=TARGET_VAULT_ID,
        num_vaults=NUM_VAULTS,
        tile=TILE,
        elem_bytes=ELEM_BYTES
    )