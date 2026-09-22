import math
import json
import struct

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


ROLES = [
    {"stage": "up_proj",   "weight": "W1", "bias": "b1", "in": "X", "out": "H"},
    {"stage": "down_proj", "weight": "W2", "bias": "b2", "in": "H", "out": "Y"},
]


# ============================================================
# Stage 4: Build the single-core memory layout from the shapes
# ============================================================

def build_layout(matmul_shapes, roles, num_vaults=1, elem_bytes=4):
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


def build_single_vault_schedule(matmul_shapes, roles, num_vaults=1, tile=32, elem_bytes=4):
    layout, rows_per_vault, per_vault_bytes = build_layout(matmul_shapes, roles, num_vaults, elem_bytes)

    schedule = []
    for (M, K, N), role in zip(matmul_shapes, roles):
        schedule += gen_stage_instrs(K, N, role, layout, rows_per_vault, tile, elem_bytes)

    return schedule, layout, rows_per_vault, per_vault_bytes


# ============================================================
# Stage 8-9: Package Core Instructions & Data into an ELF
# ============================================================

def create_core_elf(vault_id, instructions, layout, rows_per_vault):
    instr_bytes = json.dumps(instructions, indent=2).encode('utf-8')
    
    layout_meta = {
        "vault_id": vault_id,
        "rows_per_vault": rows_per_vault,
        "layout": layout
    }
    data_bytes = json.dumps(layout_meta, indent=2).encode('utf-8')

    ELFCLASS64 = 2
    ELFDATA2LSB = 1
    EV_CURRENT = 1
    ET_EXEC = 2
    EM_NONE = 0
    
    e_ident = b'\x7fELF' + bytes([ELFCLASS64, ELFDATA2LSB, EV_CURRENT, 0]) + b'\x00' * 8
    
    e_type = ET_EXEC
    e_machine = EM_NONE
    e_version = EV_CURRENT
    e_entry = 0x400000
    e_phoff = 64
    e_shoff = 64 + 2 * 56
    e_flags = 0
    e_ehsize = 64
    e_phentsize = 56
    e_phnum = 2
    e_shentsize = 64
    e_shnum = 4
    e_shstrndx = 3

    elf_header = struct.pack(
        '<HHIQQQIHHHHHH',
        e_type, e_machine, e_version, e_entry,
        e_phoff, e_shoff, e_flags,
        e_ehsize, e_phentsize, e_phnum,
        e_shentsize, e_shnum, e_shstrndx
    )
    elf_header = e_ident + elf_header

    instr_offset = 256
    instr_size = len(instr_bytes)
    
    data_offset = instr_offset + ((instr_size + 15) & ~15)
    data_size = len(data_bytes)
    
    shstrtab = b'\x00.instructions\x00.data\x00.shstrtab\x00'
    shstrtab_offset = data_offset + ((data_size + 15) & ~15)
    shstrtab_size = len(shstrtab)

    PT_LOAD = 1
    PF_R = 4
    PF_X = 1
    PF_W = 2

    phdr_instr = struct.pack(
        '<IIQQQQQQ',
        PT_LOAD, PF_R | PF_X,
        instr_offset, e_entry, e_entry,
        instr_size, instr_size, 16
    )

    data_vaddr = e_entry + 0x100000
    phdr_data = struct.pack(
        '<IIQQQQQQ',
        PT_LOAD, PF_R | PF_W,
        data_offset, data_vaddr, data_vaddr,
        data_size, data_size, 16
    )

    program_headers = phdr_instr + phdr_data

    SHT_PROGBITS = 1
    SHT_STRTAB = 3
    SHF_WRITE = 1
    SHF_ALLOC = 2
    SHF_EXECINSTR = 4

    shdr_null = b'\x00' * 64
    shdr_instr = struct.pack('<IIQQQQIIQQ', 1, SHT_PROGBITS, SHF_ALLOC | SHF_EXECINSTR, e_entry, instr_offset, instr_size, 0, 0, 16, 0)
    shdr_data = struct.pack('<IIQQQQIIQQ', 15, SHT_PROGBITS, SHF_ALLOC | SHF_WRITE, data_vaddr, data_offset, data_size, 0, 0, 16, 0)
    shdr_shstrtab = struct.pack('<IIQQQQIIQQ', 22, SHT_STRTAB, 0, 0, shstrtab_offset, shstrtab_size, 0, 0, 1, 0)

    section_headers = shdr_null + shdr_instr + shdr_data + shdr_shstrtab

    elf_file = bytearray()
    elf_file.extend(elf_header)
    elf_file.extend(program_headers)
    
    while len(elf_file) < instr_offset:
        elf_file.append(0)
    elf_file.extend(instr_bytes)

    while len(elf_file) < data_offset:
        elf_file.append(0)
    elf_file.extend(data_bytes)

    while len(elf_file) < shstrtab_offset:
        elf_file.append(0)
    elf_file.extend(shstrtab)

    return bytes(elf_file)


# ============================================================
# Main Execution
# ============================================================

if __name__ == "__main__":
    NUM_VAULTS = 1  # Sliced to 1 core/vault
    TILE = 32
    ELEM_BYTES = 4

    # Stages 1-3
    export_ffn_to_linalg("ffn_linalg.mlir")
    clean_ir("ffn_linalg.mlir", "ffn_clean.mlir")
    matmul_shapes = extract_matmul_shapes("ffn_clean.mlir")

    # Stages 4-7
    schedule, layout, rows_per_vault, per_vault_bytes = build_single_vault_schedule(
        matmul_shapes, ROLES, NUM_VAULTS, TILE, ELEM_BYTES
    )

    print("Matmul shapes (M, K, N):", matmul_shapes)
    print("Layout:\n", json.dumps(layout, indent=2))
    print(f"Memory usage for 1 core: {per_vault_bytes / 1e6:.2f} MB")
    print(f"Total instructions generated: {len(schedule)}")

    # Stages 8-9: Package to ELF
    elf_data = create_core_elf(vault_id=0, instructions=schedule, layout=layout, rows_per_vault=rows_per_vault)
    with open("vault_0.elf", "wb") as f:
        f.write(elf_data)
    
    print("Successfully generated vault_0.elf")