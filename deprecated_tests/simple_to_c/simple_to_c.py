import math
import cgen

# ============================================================
# Stage 1: Export Single 1x10 Vector-Matrix Mul in PyTorch to MLIR
# ============================================================

def export_matmul_to_linalg(out_path="matmul_linalg.mlir"):
    import torch
    import torch.nn as nn
    from torch_mlir import fx
    from torch_mlir.fx import OutputType

    class SingleVecMatmul(nn.Module):
        def __init__(self):
            super().__init__()

        def forward(self, A, B):
            return torch.matmul(A, B)

    model = SingleVecMatmul().eval()
    # 1x10 Vector x 10x10 Matrix
    A = torch.randn(1, 10)
    B = torch.randn(10, 10)

    module = fx.export_and_import(
        model, A, B, output_type=OutputType.LINALG_ON_TENSORS
    )

    with open(out_path, "w") as f:
        f.write(str(module))
    return out_path


# ============================================================
# Stage 2: Clean MLIR IR
# ============================================================

def clean_ir(in_path="matmul_linalg.mlir", out_path="matmul_clean.mlir"):
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
# Stage 3: Extract Matmul Shape (M, K, N)
# ============================================================

def extract_matmul_shape(mlir_path="matmul_clean.mlir"):
    from torch_mlir.ir import Context, Module, RankedTensorType

    with open(mlir_path) as f:
        ir_text = f.read()

    shape = None

    with Context() as ctx:
        module = Module.parse(ir_text)

        def walk(op):
            nonlocal shape
            if op.name == "linalg.matmul":
                lhs = RankedTensorType(op.operands[0].type)
                rhs = RankedTensorType(op.operands[1].type)
                M, K = lhs.shape[-2], lhs.shape[-1]
                N = rhs.shape[-1]
                shape = (M, K, N)
            for region in op.regions:
                for block in region.blocks:
                    for inner_op in block.operations:
                        walk(inner_op)

        walk(module.operation)

    return shape


# ============================================================
# Stage 4: Single Vault Tiling & Memory Layout
# ============================================================

def generate_vault_matmul_schedule(M, K, N, target_vault_id=0, num_vaults=1, tile=10, elem_bytes=4):
    rows_per_vault = math.ceil(M / num_vaults)
    
    a_base = 0
    a_size = rows_per_vault * K * elem_bytes
    
    b_base = a_base + a_size
    b_size = K * N * elem_bytes
    
    c_base = b_base + b_size
    c_size = rows_per_vault * N * elem_bytes
    
    total_bytes = c_base + c_size

    n_n = math.ceil(N / tile)
    n_k = math.ceil(K / tile)

    instrs = []
    for j in range(n_n):
        for k in range(n_k):
            b_addr = b_base + (k * tile * N + j * tile) * elem_bytes
            a_addr = a_base + (k * tile) * elem_bytes
            
            instrs.append({
                "op": "TILE_MAC",
                "b_addr": b_addr,
                "a_addr": a_addr,
                "tile_m": rows_per_vault,
                "tile_k": min(tile, K - k * tile),
                "tile_n": min(tile, N - j * tile),
                "clear_acc": (k == 0)
            })

        c_addr = c_base + (j * tile) * elem_bytes
        instrs.append({
            "op": "TILE_DRAIN",
            "c_addr": c_addr,
            "tile_m": rows_per_vault,
            "tile_n": min(tile, N - j * tile)
        })

    return instrs, rows_per_vault, total_bytes


# ============================================================
# Stage 5: Bare-Metal Driver CGen
# ============================================================

def auto_cgen_single_matmul(M, K, N, target_vault_id=0, num_vaults=1, tile=10, elem_bytes=4, output_filename="vault_0_driver.c"):
    instructions, rows_per_vault, total_bytes = generate_vault_matmul_schedule(
        M, K, N, target_vault_id, num_vaults, tile, elem_bytes
    )

    # File Header
    c_head = [
        cgen.Include("math.h"),
        cgen.Include("stdio.h"),
        cgen.Include("stdlib.h"),
        cgen.Include("stdint.h"),
        cgen.Include("stdbool.h"),
        cgen.Include("string.h"),
        cgen.Line(),
        cgen.Line("#ifndef SYS_exit_group"),
        cgen.Line("#define SYS_exit_group 94"),
        cgen.Line("#endif"),
        cgen.Line(),
        cgen.Define("TARGET_VAULT_ID", str(target_vault_id)),
        cgen.Define("VAULT_DRAM_BYTES", str(total_bytes)),
        cgen.Define("ROWS_PER_VAULT", str(rows_per_vault)),
        cgen.Define("TILE_SIZE", str(tile)),
        cgen.Line(),
        cgen.Comment("Forward declarations"),
        cgen.Statement("int main(void)"),
        cgen.Statement("void force_exit_group(int status)"),
        cgen.Line(),
        cgen.Comment("Memory region symbol defined by linker script/flags"),
        cgen.Statement("extern char __ram"),
        cgen.Line(),
    ]

    # Assembly Entry Point (_start)
    c_start = [
        cgen.Comment("=============================================================================="),
        cgen.Comment("1. Core Entry Point (Must be at the top so it links at 0x10000)"),
        cgen.Comment("=============================================================================="),
        cgen.Statement(
            '__attribute__((naked, used))\n'
            'void _start(void) {\n'
            '    __asm__ __volatile__(\n'
            '        ".option push\\n\\t"\n'
            '        ".option norvc\\n\\t"           // Strictly enforce 32-bit instructions\n'
            '        "la sp, __ram\\n\\t"           // Set stack pointer to RAM base\n'
            '        "li t0, 0x00080000\\n\\t"       // Stack offset (512 KB)\n'
            '        "add sp, sp, t0\\n\\t"\n'
            '        "mv a0, zero\\n\\t"            // argc = 0\n'
            '        "mv a1, zero\\n\\t"            // argv = NULL\n'
            '        "call main\\n\\t"\n'
            '        "tail force_exit_group\\n\\t"\n'
            '        ".option pop\\n\\t"\n'
            '    );\n'
            '}'
        ),
        cgen.Line()
    ]

    # Syscall Wrapper
    c_exit = [
        cgen.Comment("// Direct inline system call wrapper for exit_group (non-static for tail call visibility)"),
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
                    '    while (1); // Trap guard'
                )
            ])
        ),
        cgen.Line()
    ]

    # Static Hardware Buffers
    c_buffers = [
        cgen.Statement(f"static float systolic_acc[{rows_per_vault}][{tile}]"),
        cgen.Statement("static uint8_t g_dram_buffer[VAULT_DRAM_BYTES] __attribute__((aligned(16)))"),
        cgen.Line()
    ]

    # Kernels
    mac_kernel = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("static inline void", "tile_mac_kernel"),
            [
                cgen.Value("float *", "dram"),
                cgen.Value("uint32_t", "b_offset"),
                cgen.Value("uint32_t", "a_offset"),
                cgen.Value("int", "tile_m"),
                cgen.Value("int", "tile_k"),
                cgen.Value("int", "tile_n"),
                cgen.Value("bool", "clear_acc")
            ]
        ),
        cgen.Block([
            cgen.Statement("if (clear_acc) memset(systolic_acc, 0, sizeof(systolic_acc))"),
            cgen.Statement("float *B = (float *)&dram[b_offset]"),
            cgen.Statement("float *A = (float *)&dram[a_offset]"),
            cgen.For("int m = 0", "m < tile_m", "m++",
                cgen.For("int n = 0", "n < tile_n", "n++",
                    cgen.For("int k = 0", "k < tile_k", "k++",
                        cgen.Statement(f"systolic_acc[m][n] += A[m * {K} + k] * B[k * {N} + n]")
                    )
                )
            )
        ])
    )

    drain_kernel = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("static inline void", "tile_drain_kernel"),
            [
                cgen.Value("float *", "dram"),
                cgen.Value("uint32_t", "c_offset"),
                cgen.Value("int", "tile_m"),
                cgen.Value("int", "tile_n")
            ]
        ),
        cgen.Block([
            cgen.Statement("float *C = (float *)&dram[c_offset]"),
            cgen.For("int m = 0", "m < tile_m", "m++",
                cgen.For("int n = 0", "n < tile_n", "n++",
                    cgen.Statement(f"C[m * {N} + n] = systolic_acc[m][n]")
                )
            )
        ])
    )

    # Schedule Body
    c_unrolled_calls = []
    for i, inst in enumerate(instructions):
        if inst["op"] == "TILE_MAC":
            clear_acc = "true" if inst["clear_acc"] else "false"
            c_unrolled_calls.append(cgen.Comment(f"Step {i:03d}: Tile MAC"))
            c_unrolled_calls.append(cgen.Statement(
                f"tile_mac_kernel(vault_dram, 0x{inst['b_addr']:08X}U, 0x{inst['a_addr']:08X}U, "
                f"{inst['tile_m']}, {inst['tile_k']}, {inst['tile_n']}, {clear_acc})"
            ))
        elif inst["op"] == "TILE_DRAIN":
            c_unrolled_calls.append(cgen.Comment(f"Step {i:03d}: Drain Accumulator"))
            c_unrolled_calls.append(cgen.Statement(
                f"tile_drain_kernel(vault_dram, 0x{inst['c_addr']:08X}U, "
                f"{inst['tile_m']}, {inst['tile_n']})"
            ))

    # Schedule Wrapper Function
    c_schedule_fn = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("void", f"execute_vault_{target_vault_id}_schedule"),
            [cgen.Value("float *", "vault_dram")]
        ),
        cgen.Block(c_unrolled_calls)
    )

    # Main Entry
    c_main = cgen.FunctionBody(
        cgen.FunctionDeclaration(
            cgen.Value("int", "main"),
            []
        ),
        cgen.Block([
            cgen.Statement(f"execute_vault_{target_vault_id}_schedule((float *)g_dram_buffer)"),
            cgen.Statement("force_exit_group(0)"),
            cgen.Statement("return 0")
        ])
    )

    # Assemble Output AST
    c_file_ast = cgen.Module([
        *c_head,
        *c_start,
        *c_exit,
        *c_buffers,
        mac_kernel,
        cgen.Line(),
        drain_kernel,
        cgen.Line(),
        c_schedule_fn,
        cgen.Line(),
        c_main
    ])

    with open(output_filename, "w") as f:
        f.write(str(c_file_ast))

    print(f"Generated 1x10 x 10x10 driver: {output_filename}")


if __name__ == "__main__":
    export_matmul_to_linalg("matmul_linalg.mlir")
    clean_ir("matmul_linalg.mlir", "matmul_clean.mlir")
    shape = extract_matmul_shape("matmul_clean.mlir")

    if shape:
        M, K, N = shape
        print(f"Extracted Shape: {M}x{K}x{N}")
        auto_cgen_single_matmul(
            M=M, K=K, N=N,
            target_vault_id=0,
            num_vaults=1,
            tile=10,
            output_filename="vault_0_driver.c"
        )
    else:
        print("Failed to extract shape.")