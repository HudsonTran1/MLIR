import json
import math
import os

# ============================================================
# Stage 1: Define the model and export to Torch-MLIR (linalg-on-tensors)
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
    example_input = torch.randn(1, 128, 512)  # (batch, seq_len, d_model)

    module = fx.export_and_import(
        model, example_input, output_type=OutputType.LINALG_ON_TENSORS
    )

    text = str(module)
    with open(out_path, "w") as f:
        f.write(text)
    return out_path


# ============================================================
# Stage 2: Clean up the IR (canonicalize + CSE)
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
# Stage 3: Walk the cleaned IR, extract each linalg.matmul's (M, K, N)
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
                lhs = RankedTensorType(op.operands[0].type)   # activation: [..., M, K]
                rhs = RankedTensorType(op.operands[1].type)   # weight:     [K, N]
                M, K = lhs.shape[-2], lhs.shape[-1]
                N = rhs.shape[-1]
                shapes.append((M, K, N))
            for region in op.regions:
                for block in region.blocks:
                    for inner_op in block.operations:
                        walk(inner_op)

        walk(module.operation)

    return shapes


# Fixed role mapping for THIS toy FFN (up_proj then down_proj, in file order)
ROLES = [
    {"stage": "up_proj",   "weight": "W1", "bias": "b1", "in": "X", "out": "H"},
    {"stage": "down_proj", "weight": "W2", "bias": "b2", "in": "H", "out": "Y"},
]


# ============================================================
# Stage 4: Build the per-vault memory layout from the shapes
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


# ============================================================
# Stage 5-6: Tile each matmul's iteration space into 32x32 blocks
# ============================================================

def gen_stage_instrs(K, N, role, layout, rows_per_vault, tile=32, elem_bytes=4):
    n_n, n_k = math.ceil(N / tile), math.ceil(K / tile)
    w_base, w_width = layout[role["weight"]]["base"], layout[role["weight"]]["width"]
    b_base = layout[role["bias"]]["base"]
    a_base = layout[role["in"]]["base"]
    o_base = layout[role["out"]]["base"]

    instrs = []
    for j in range(n_n):
        for k in range(n_k):
            w_addr = w_base + (k * tile * w_width + j * tile) * elem_bytes
            a_addr = a_base + (k * tile) * elem_bytes
            instrs.append({"stage": role["stage"], "op": "LOAD_WEIGHTS", "n": j, "k": k,
                            "addr": w_addr, "size": tile * tile * elem_bytes,
                            "clear_acc": (k == 0)})
            instrs.append({"stage": role["stage"], "op": "STREAM_ACT", "n": j, "k": k,
                            "addr": a_addr, "size": rows_per_vault * tile * elem_bytes})
        o_addr = o_base + (j * tile) * elem_bytes
        instrs.append({"stage": role["stage"], "op": "DRAIN", "n": j,
                        "addr": o_addr, "size": rows_per_vault * tile * elem_bytes, "final": True})
        b_addr = b_base + (j * tile) * elem_bytes
        instrs.append({"stage": role["stage"], "op": "ADD_BIAS", "n": j,
                        "addr": b_addr, "size": tile * elem_bytes})
    return instrs


# ============================================================
# Stage 7-8: Assemble all vault schedules
# ============================================================

def build_all_vault_schedules(matmul_shapes, roles, num_vaults=8, tile=32, elem_bytes=4):
    layout, rows_per_vault, per_vault_bytes = build_layout(matmul_shapes, roles, num_vaults, elem_bytes)

    single_vault_schedule = []
    for (M, K, N), role in zip(matmul_shapes, roles):
        single_vault_schedule += gen_stage_instrs(K, N, role, layout, rows_per_vault, tile, elem_bytes)

    all_vaults = {v: single_vault_schedule for v in range(num_vaults)}
    return all_vaults, layout, rows_per_vault, per_vault_bytes


# ============================================================
# Stage 9: Generate C code for a given vault using `cgen`
# ============================================================

def generate_vault_c_code(vault_id, vault_instructions, output_filename=None):
    """
    Takes an instruction list for a target vault ID and uses `cgen` to generate
    a C file containing the program schedule.
    """
    import cgen

    if output_filename is None:
        output_filename = f"vault_{vault_id}_schedule.c"

    # Define instruction structure type
    struct_instr = cgen.Struct(
        "NMPInstruction",
        [
            cgen.Value("const char *", "stage"),
            cgen.Value("const char *", "op"),
            cgen.Value("uint32_t", "addr"),
            cgen.Value("uint32_t", "size"),
            cgen.Value("bool", "clear_acc"),
            cgen.Value("bool", "final_drain"),
        ],
    )

    # Convert Python instruction dictionary array into C struct initializers
    c_instr_items = []
    for instr in vault_instructions:
        clear_acc = "true" if instr.get("clear_acc", False) else "false"
        final_drain = "true" if instr.get("final", False) else "false"
        c_instr_items.append(
            f'  {{ "{instr["stage"]}", "{instr["op"]}", 0x{instr["addr"]:08X}U, '
            f'{instr["size"]}U, {clear_acc}, {final_drain} }}'
        )

    array_init_text = "{\n" + ",\n".join(c_instr_items) + "\n}"

    # Construct the full standard AST / hierarchy using cgen
    c_file_ast = cgen.Module(
        [
            cgen.Comment(f"Auto-generated NMP Schedule for Vault {vault_id}"),
            cgen.Include("stdint.h"),
            cgen.Include("stdbool.h"),
            cgen.Include("stdio.h"),
            cgen.Line(),
            cgen.Define("TARGET_VAULT_ID", str(vault_id)),
            cgen.Define("TOTAL_INSTRUCTIONS", str(len(vault_instructions))),
            cgen.Line(),
            struct_instr,
            cgen.Line(),
            cgen.Value(
                "const NMPInstruction",
                f"VAULT_{vault_id}_SCHEDULE[TOTAL_INSTRUCTIONS] = {array_init_text}",
            ),
            cgen.Line(),
            cgen.FunctionBody(
                cgen.FunctionDeclaration(
                    cgen.Value("void", f"execute_vault_{vault_id}_schedule"), []
                ),
                cgen.Block(
                    [
                        cgen.Statement(
                            f'printf("=== Executing NMP Schedule for Vault %d (%d instructions) ===\\n", TARGET_VAULT_ID, TOTAL_INSTRUCTIONS)'
                        ),
                        cgen.For(
                            "int i = 0",
                            "i < TOTAL_INSTRUCTIONS",
                            "i++",
                            cgen.Block(
                                [
                                    cgen.Statement(
                                        f"const NMPInstruction *inst = &VAULT_{vault_id}_SCHEDULE[i]"
                                    ),
                                    cgen.Statement(
                                        'printf("[%03d] [%s] %-12s | Addr: 0x%08X | Size: %6u bytes | ClearAcc: %d\\n", '
                                        'i, inst->stage, inst->op, inst->addr, inst->size, inst->clear_acc)'
                                    ),
                                ]
                            ),
                        ),
                    ]
                ),
            ),
        ]
    )

    c_code_str = str(c_file_ast)

    with open(output_filename, "w") as f:
        f.write(c_code_str)

    print(f"Generated C schedule for Vault {vault_id}: {output_filename}")
    return output_filename


if __name__ == "__main__":
    # --- Configuration Parameters ---
    NUM_VAULTS = 8
    TILE = 32
    ELEM_BYTES = 4
    TARGET_VAULT_ID = 0  # Change this parameter to target any vault (0 to NUM_VAULTS - 1)

    # Execute MLIR pipeline
    export_ffn_to_linalg("ffn_linalg.mlir")
    clean_ir("ffn_linalg.mlir", "ffn_clean.mlir")
    matmul_shapes = extract_matmul_shapes("ffn_clean.mlir")

    # Build schedules for all vaults
    all_vaults, layout, rows_per_vault, per_vault_bytes = build_all_vault_schedules(
        matmul_shapes, ROLES, NUM_VAULTS, TILE, ELEM_BYTES
    )

    # Slice out single vault instruction list
    vault_schedule = all_vaults[TARGET_VAULT_ID]

    # Generate single C file for specified target vault
    generate_vault_c_code(
        vault_id=TARGET_VAULT_ID,
        vault_instructions=vault_schedule,
        output_filename=f"vault_{TARGET_VAULT_ID}_driver.c",
    )