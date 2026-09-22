"""
Full pipeline: PyTorch ToyFFN -> Torch-MLIR (linalg-on-tensors) -> matmul
shapes -> tiled, per-vault instruction schedule with resolved NMP-vault
addresses.

Requires (stages 1-2 only): torch, torch-mlir installed in your environment.
Stages 3-8 are pure Python / MLIR-python-bindings and have no other deps.

Hardware assumption baked in throughout: 8 vaults, each a 32x32 systolic
array + 1GB NMP memory. Mapping strategy: split the batch/row dimension (M)
across the 8 vaults (data-parallel); weights/biases are replicated
identically into every vault. See conversation history for why this beats
splitting the hidden dim for a model this size.
"""

import math
import json

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

    return shapes  # NOTE: order-based ([0]=up_proj, [1]=down_proj) -- fine for
                   # a 2-matmul toy FFN; tag ops with a "role" attribute instead
                   # once you point this at models with more matmuls (see convo).


# Fixed role mapping for THIS toy FFN (up_proj then down_proj, in file order)
ROLES = [
    {"stage": "up_proj",   "weight": "W1", "bias": "b1", "in": "X", "out": "H"},
    {"stage": "down_proj", "weight": "W2", "bias": "b2", "in": "H", "out": "Y"},
]


# ============================================================
# Stage 4: Build the per-vault memory layout from the shapes
# ============================================================

def build_layout(matmul_shapes, roles, num_vaults=8, elem_bytes=4):
    """
    Lays out weights/biases (replicated, same address in every vault) and
    activation tensors (each vault only holds its own row-slice) back to
    back in a single flat per-vault address space starting at 0.
    Returns (layout dict, rows_per_vault, total bytes used per vault).
    """
    M_total = matmul_shapes[0][0]
    assert M_total % num_vaults == 0, "M must divide evenly across vaults for this simple mapping"
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

    # activation tensors: only the input to stage 0, and each stage's output
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
# Stage 5-6: Tile each matmul's iteration space into 32x32 blocks and
# resolve each block's operands to concrete byte addresses
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
            a_addr = a_base + (k * tile) * elem_bytes  # column offset; row0 implicit (whole slice streams)
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
# Stage 7-8: Assemble the full per-vault schedule and write it out
# ============================================================

def build_all_vault_schedules(matmul_shapes, roles, num_vaults=8, tile=32, elem_bytes=4):
    layout, rows_per_vault, per_vault_bytes = build_layout(matmul_shapes, roles, num_vaults, elem_bytes)

    # Addresses are identical across vaults (each vault's local space starts
    # at 0), so compute the schedule once and reuse it per vault; only the
    # vault id differs, since that's what selects the physical Link/port.
    single_vault_schedule = []
    for (M, K, N), role in zip(matmul_shapes, roles):
        single_vault_schedule += gen_stage_instrs(K, N, role, layout, rows_per_vault, tile, elem_bytes)

    all_vaults = {v: single_vault_schedule for v in range(num_vaults)}
    return all_vaults, layout, rows_per_vault, per_vault_bytes


if __name__ == "__main__":
    NUM_VAULTS = 8
    TILE = 32
    ELEM_BYTES = 4

    # Stages 1-2 require torch + torch-mlir; comment out if running elsewhere
    export_ffn_to_linalg("ffn_linalg.mlir")
    clean_ir("ffn_linalg.mlir", "ffn_clean.mlir")
    matmul_shapes = extract_matmul_shapes("ffn_clean.mlir")

    all_vaults, layout, rows_per_vault, per_vault_bytes = build_all_vault_schedules(
        matmul_shapes, ROLES, NUM_VAULTS, TILE, ELEM_BYTES
    )

    print("matmul shapes (M,K,N):", matmul_shapes)
    print("layout:", json.dumps(layout, indent=2))
    print(f"per-vault usage: {per_vault_bytes/1e6:.2f} MB of 1024 MB")
    print(f"instructions per vault: {len(all_vaults[0])}  (x{NUM_VAULTS} vaults)")

    with open("instructions_with_addr.json", "w") as f:
        json.dump(all_vaults, f, indent=2)
    print("wrote instructions_with_addr.json")
