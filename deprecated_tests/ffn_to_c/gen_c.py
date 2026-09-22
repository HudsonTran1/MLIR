import json
import math
import os

# ============================================================
# Stage 1: Define model & export to Torch-MLIR
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

    text = str(module)
    with open(out_path, "w") as f:
        f.write(text)
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
# Stage 3: Walk cleaned IR, extract matmul shapes
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
# Stage 4: Per-vault memory layout
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
# Stage 5-6: Tile iteration space
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
# Stage 7-8: Build schedule
# ============================================================

def build_all_vault_schedules(matmul_shapes, roles, num_vaults=8, tile=32, elem_bytes=4):
    layout, rows_per_vault, per_vault_bytes = build_layout(matmul_shapes, roles, num_vaults, elem_bytes)

    single_vault_schedule = []
    for (M, K, N), role in zip(matmul_shapes, roles):
        single_vault_schedule += gen_stage_instrs(K, N, role, layout, rows_per_vault, tile, elem_bytes)

    all_vaults = {v: single_vault_schedule for v in range(num_vaults)}
    return all_vaults, layout, rows_per_vault, per_vault_bytes


# ============================================================
# Stage 9: Generate fully unrolled C code using `cgen`
# ============================================================

def generate_unrolled_vault_c(vault_id, vault_instructions, output_filename=None):
    """
    Unrolls all instructions into direct C operations defined in `nmp_vault_ops.h`.
    """
    import cgen

    if output_filename is None:
        output_filename = f"vault_{vault_id}_driver.c"

    c_statements = [
        cgen.Statement(f"nmp_vault_init({vault_id})")
    ]

    for i, inst in enumerate(vault_instructions):
        op = inst["op"]
        addr = f"0x{inst['addr']:08X}U"
        size = f"{inst['size']}U"

        c_statements.append(cgen.Comment(f"Step {i:03d}: [{inst['stage']}] {op}"))

        if op == "LOAD_WEIGHTS":
            clear_acc = "true" if inst.get("clear_acc", False) else "false"
            stmt = cgen.Statement(f"nmp_op_load_weights({addr}, {size}, {clear_acc})")
        elif op == "STREAM_ACT":
            stmt = cgen.Statement(f"nmp_op_stream_act({addr}, {size})")
        elif op == "DRAIN":
            final_drain = "true" if inst.get("final", False) else "false"
            stmt = cgen.Statement(f"nmp_op_drain({addr}, {size}, {final_drain})")
        elif op == "ADD_BIAS":
            stmt = cgen.Statement(f"nmp_op_add_bias({addr}, {size})")
        else:
            continue

        c_statements.append(stmt)

    c_file_ast = cgen.Module([
        cgen.Comment(f"Auto-generated Unrolled NMP C Driver for Vault {vault_id}"),
        cgen.Include("stdint.h"),
        cgen.Include("stdbool.h"),
        cgen.Include("nmp_vault_ops.h"),
        cgen.Line(),
        cgen.FunctionBody(
            cgen.FunctionDeclaration(
                cgen.Value("void", f"execute_vault_{vault_id}_schedule"), []
            ),
            cgen.Block(c_statements)
        )
    ])

    with open(output_filename, "w") as f:
        f.write(str(c_file_ast))

    print(f"Generated unrolled C file for Vault {vault_id}: {output_filename}")


if __name__ == "__main__":
    # Parameters
    NUM_VAULTS = 8
    TILE = 32
    ELEM_BYTES = 4
    TARGET_VAULT_ID = 0  # <--- Change this to generate code for another vault

    # Pipeline execution
    export_ffn_to_linalg("ffn_linalg.mlir")
    clean_ir("ffn_linalg.mlir", "ffn_clean.mlir")
    matmul_shapes = extract_matmul_shapes("ffn_clean.mlir")

    all_vaults, layout, rows_per_vault, per_vault_bytes = build_all_vault_schedules(
        matmul_shapes, ROLES, NUM_VAULTS, TILE, ELEM_BYTES
    )

    # Output unrolled C file for target vault
    generate_unrolled_vault_c(
        vault_id=TARGET_VAULT_ID,
        vault_instructions=all_vaults[TARGET_VAULT_ID],
        output_filename=f"vault_{TARGET_VAULT_ID}_driver.c"
    )