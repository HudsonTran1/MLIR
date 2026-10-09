#!/usr/bin/env python3
"""
lower_to_c.py -- linalg-on-tensors -> Bufferized Loops -> EmitC -> Bare-Metal Harness
"""
import argparse
import random
import re
import shutil
import subprocess
import sys
from pathlib import Path

# ------------------------------------------------------------------ Sources

def matmul_mlir(n):
    t = f"tensor<{n}x{n}xf32>"
    return f"""func.func @matmul(%A: {t}, %B: {t}) -> {t} {{
  %c0 = arith.constant 0.0 : f32
  %init = tensor.empty() : {t}
  %fill = linalg.fill ins(%c0 : f32) outs(%init : {t}) -> {t}
  %r = linalg.matmul ins(%A, %B : {t}, {t}) outs(%fill : {t}) -> {t}
  return %r : {t}
}}
"""


def ffn_mlir(S, D, F):
    x, w1, b1 = f"tensor<{S}x{D}xf32>", f"tensor<{D}x{F}xf32>", f"tensor<{F}xf32>"
    w2, b2 = f"tensor<{F}x{D}xf32>", f"tensor<{D}xf32>"
    h, y = f"tensor<{S}x{F}xf32>", f"tensor<{S}x{D}xf32>"
    return f"""#id = affine_map<(d0, d1) -> (d0, d1)>
#bias = affine_map<(d0, d1) -> (d1)>
func.func @ffn(%x: {x}, %w1: {w1}, %b1: {b1}, %w2: {w2}, %b2: {b2}) -> {y} {{
  %zero = arith.constant 0.0 : f32
  %e1 = tensor.empty() : {h}
  %z1 = linalg.fill ins(%zero : f32) outs(%e1 : {h}) -> {h}
  %h0 = linalg.matmul ins(%x, %w1 : {x}, {w1}) outs(%z1 : {h}) -> {h}
  %e2 = tensor.empty() : {h}
  %h1 = linalg.generic {{indexing_maps = [#id, #bias, #id], iterator_types = ["parallel", "parallel"]}}
      ins(%h0, %b1 : {h}, {b1}) outs(%e2 : {h}) {{
    ^bb0(%a: f32, %b: f32, %o: f32):
      %s = arith.addf %a, %b : f32
      %r = arith.maximumf %s, %zero : f32
      linalg.yield %r : f32
  }} -> {h}
  %e3 = tensor.empty() : {y}
  %z3 = linalg.fill ins(%zero : f32) outs(%e3 : {y}) -> {y}
  %o0 = linalg.matmul ins(%h1, %w2 : {h}, {w2}) outs(%z3 : {y}) -> {y}
  %e4 = tensor.empty() : {y}
  %o1 = linalg.generic {{indexing_maps = [#id, #bias, #id], iterator_types = ["parallel", "parallel"]}}
      ins(%o0, %b2 : {y}, {b2}) outs(%e4 : {y}) {{
    ^bb0(%a: f32, %b: f32, %o: f32):
      %s = arith.addf %a, %b : f32
      linalg.yield %s : f32
  }} -> {y}
  return %o1 : {y}
}}
"""

# ------------------------------------------------- Signature & Data Generators

def parse_sig(text):
    m = re.search(r"func\.func\s+(?:public\s+|private\s+)?@(\w+)\((.*?)\)\s*->\s*"
                  r"(tensor<[0-9x]+xf32>)", text, re.S)
    if not m:
        sys.exit("could not find a func with static-shape f32 tensor args/result")
    name, args, res = m.groups()
    shp = lambda s: [int(d) for d in s.split("x")]
    ins = [shp(a) for a in re.findall(r"tensor<([0-9x]+)xf32>", args)]
    out = shp(re.match(r"tensor<([0-9x]+)xf32>", res).group(1))
    return name, ins, out


def numel(shape):
    n = 1
    for d in shape:
        n *= d
    return n


def make_data(ins, seed):
    rnd = random.Random(seed)
    return [[round(rnd.uniform(-1.0, 1.0), 3) for _ in range(numel(s))] for s in ins]


def ref_matmul(A, B, M, K, N):
    return [sum(A[i * K + k] * B[k * N + j] for k in range(K)) for i in range(M) for j in range(N)]


def reference(kind, ins, data):
    if kind == "matmul":
        (M, K), (_, N) = ins[0], ins[1]
        return ref_matmul(data[0], data[1], M, K, N)
    if kind == "ffn":
        (S, D), (_, F) = ins[0], ins[1]
        h = ref_matmul(data[0], data[1], S, D, F)
        h = [max(h[i * F + j] + data[2][j], 0.0) for i in range(S) for j in range(F)]
        o = ref_matmul(h, data[3], S, F, D)
        return [o[i * D + j] + data[4][j] for i in range(S) for j in range(D)]
    return None

# ----------------------------------------------------------------- MLIR Tools

def find_tool(explicit, base):
    if explicit:
        return explicit
    for cand in [base] + [f"{base}-{v}" for v in range(25, 16, -1)]:
        if shutil.which(cand):
            return cand
    sys.exit(f"cannot find {base}; pass --{base} PATH")


def run(cmd, stdin_text=None):
    print("+", " ".join(cmd), file=sys.stderr)
    p = subprocess.run(cmd, input=stdin_text, capture_output=True, text=True)
    if p.returncode != 0:
        sys.exit(f"command failed:\n{p.stderr}")
    return p.stdout


TRANSFORM_TILE = """module attributes {{transform.with_named_sequence}} {{
  transform.named_sequence @__transform_main(%root: !transform.any_op {{transform.readonly}}) {{
    %mm = transform.structured.match ops{{["linalg.matmul"]}} in %root : (!transform.any_op) -> !transform.any_op
    %t, %l0, %l1, %l2 = transform.structured.tile_using_for %mm tile_sizes [{m}, {n}, {k}]
        : (!transform.any_op) -> (!transform.any_op, !transform.any_op, !transform.any_op, !transform.any_op)
    transform.yield
  }}
}}
"""


def fixup_emitc(text):
    out = []
    for line in text.splitlines():
        if "emitc.func" in line:
            line = re.sub(r"memref<([0-9x]+x\w+)>", r"!emitc.array<\1>", line)
        line = re.sub(r": memref<([0-9x]+x\w+)> to !emitc\.array",
                      r": !emitc.array<\1> to !emitc.array", line)
        line = re.sub(r"(unrealized_conversion_cast .*) to index$", r"\1 to !emitc.size_t", line)
        if "subscript" in line:
            line = line.replace(", index", ", !emitc.size_t")
        out.append(line)
    return "\n".join(out) + "\n"


def lower(src_text, opt, translate, outdir, name, tile, max_stack):
    stage = lambda suffix, txt: (outdir / f"{name}.{suffix}.mlir").write_text(txt)
    stage("0_linalg", src_text)
    cur = src_text

    if tile:
        m, n, k = tile
        lib = outdir / "tile_transform.mlir"
        lib.write_text(TRANSFORM_TILE.format(m=m, n=n, k=k))
        cur = run([opt, f"--transform-preload-library=transform-library-paths={lib}",
                   "--transform-interpreter", "--canonicalize"], cur)
        stage("1_tiled", cur)

    cur = run([opt,
               "--one-shot-bufferize=bufferize-function-boundaries "
               "function-boundary-type-conversion=identity-layout-map",
               "--buffer-results-to-out-params=hoist-static-allocs",
               f"--promote-buffers-to-stack=max-alloc-size-in-bytes={max_stack}",
               "--convert-linalg-to-loops",
               "--fold-memref-alias-ops", "--lower-affine",
               "--canonicalize", "--cse"], cur)
    stage("2_loops", cur)

    cur = run([opt, "--convert-scf-to-emitc", "--convert-arith-to-emitc",
               "--convert-math-to-emitc", "--convert-memref-to-emitc",
               "--convert-func-to-emitc", "--canonicalize"], cur)
    stage("3_emitc_raw", cur)

    cur = run([opt, "--reconcile-unrealized-casts", "--canonicalize"], fixup_emitc(cur))
    stage("4_emitc", cur)

    c_text = run([translate, "--mlir-to-cpp", "--declare-variables-at-top"], cur)
    (outdir / "kernel_emitc.c").write_text(c_text)
    return c_text

# --------------------------------------------------------------- Hardware Harness

def carr(name, shape, vals, const=True):
    dims = "".join(f"[{d}]" for d in shape)
    body = ", ".join(f"{v:.6e}f" for v in vals)
    return f"static {'const ' if const else ''}float {name}{dims} = {{ {body} }};"


def make_cast(shape):
    if len(shape) <= 1:
        return "(float *)"
    sub_dims = "".join(f"[{d}]" for d in shape[1:])
    return f"(float (*){sub_dims})"


def harness(kernel_c, fname, ins, out, data, expected):
    lines = [
        '#define HAL_NO_LIBC',
        '#include "hal.h"',
        "",
        "/* ---- EmitC Kernel ---- */",
        kernel_c,
        "/* ---- Raw Static Data ---- */"
    ]
    
    for i, (s, d) in enumerate(zip(ins, data)):
        lines.append(carr(f"raw_in{i}", s, d))
    lines.append(carr("raw_out0", [numel(out)], [0.0] * numel(out), const=False))
    if expected is not None:
        lines.append(carr("raw_ref0", [numel(out)], expected))

    n_out = numel(out)
    
    lines += ["", "int main(int argc, char **argv) {",
              "    hal_init(argc, argv);",
              '    hal_puts("vault "); hal_putu((unsigned long)hal_vault_id()); hal_puts(": running\\n");',
              ""]

    for i, s in enumerate(ins):
        n_bytes = numel(s) * 4
        lines.append(f"    hal_buffer_t buf_in{i} = hal_buffer_create((void*)raw_in{i}, {n_bytes}, 1);")
    
    out_bytes = n_out * 4
    lines.append(f"    hal_buffer_t buf_out0 = hal_buffer_create((void*)raw_out0, {out_bytes}, 0);")
    
    args = []
    for i, s in enumerate(ins):
        args.append(f"{make_cast(s)}buf_in{i}.host_ptr")
    args.append(f"{make_cast(out)}buf_out0.host_ptr")
    
    arg_list = ", ".join(args)
    lines += ["",
              f"    /* Execute Kernel through HAL */",
              f"    {fname}({arg_list});",
              ""]

    if expected is not None:
        lines += ["    unsigned long bad = 0;",
                  f"    for (unsigned long i = 0; i < {n_out}; i++) {{",
                  "        float val = hal_read_elem_f32(&buf_out0, i);",
                  "        float ref = raw_ref0[i];",
                  "        float d = val - ref; if (d < 0) d = -d;",
                  "        float a = ref < 0 ? -ref : ref;",
                  "        if (d > 1e-3f + 1e-3f * a) bad++;",
                  "    }",
                  '    hal_puts(bad ? "FAIL mismatches=" : "PASS mismatches="); hal_putu(bad);',
                  f'    hal_puts(" of "); hal_putu({n_out}); hal_puts("\\n");',
                  "    force_exit_group(bad ? 1 : 0);",
                  "    return bad ? 1 : 0;"]
    else:
        lines += ["    unsigned long h = 0;",
                  f"    for (unsigned long i = 0; i < {n_out}; i++) {{",
                  "        float val = hal_read_elem_f32(&buf_out0, i);",
                  "        h = h * 31 + (unsigned long)(long)(val * 1000.0f);",
                  "    }",
                  '    hal_puts("checksum="); hal_putu(h); hal_puts("\\n");',
                  "    force_exit_group(0);",
                  "    return 0;"]

    lines.append("}")
    return "\n".join(lines) + "\n"

# --------------------------------------------------------------------- Main Execution

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--model", choices=["matmul", "ffn"], default="matmul")
    ap.add_argument("--n", type=int, default=10)
    ap.add_argument("--seq", type=int, default=16)
    ap.add_argument("--d-model", type=int, default=64)
    ap.add_argument("--d-ff", type=int, default=256)
    ap.add_argument("--mlir-in")
    ap.add_argument("--tile")
    ap.add_argument("--max-stack", type=int, default=1 << 20)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--name", default="vault0")
    ap.add_argument("--outdir", default="build")
    ap.add_argument("--mlir-opt")
    ap.add_argument("--mlir-translate")
    
    # Pluggable HAL Cross-Compilation Options
    ap.add_argument("--hal-src", default="hal_vanadis.c", help="Path to the HAL implementation .c file")
    ap.add_argument("--num-cores", type=int, default=1, help="Number of cores/vaults for the target HAL")
    ap.add_argument("--cc", default="riscv64-unknown-elf-gcc", help="Cross compiler executable")
    ap.add_argument("--march", default="rv64gc", help="Target architecture flag")
    ap.add_argument("--mabi", default="lp64d", help="Target ABI flag")
    ap.add_argument("--no-compile", action="store_true", help="Skip GCC cross-compilation")
    
    a = ap.parse_args()

    outdir = Path(a.outdir)
    outdir.mkdir(parents=True, exist_ok=True)
    opt = find_tool(a.mlir_opt, "mlir-opt")
    translate = find_tool(a.mlir_translate, "mlir-translate")

    kind = a.model
    if a.mlir_in:
        src, kind = Path(a.mlir_in).read_text(), "custom"
    elif a.model == "matmul":
        src = matmul_mlir(a.n)
    else:
        src = ffn_mlir(a.seq, a.d_model, a.d_ff)

    fname, ins, out = parse_sig(src)
    tile = tuple(int(t) for t in a.tile.split(",")) if a.tile else None
    kernel_c = lower(src, opt, translate, outdir, a.name, tile, a.max_stack)

    data = make_data(ins, a.seed)
    expected = reference(kind, ins, data)
    
    # 1. Output the main C harness
    c_path = outdir / f"{a.name}.c"
    c_path.write_text(harness(kernel_c, fname, ins, out, data, expected))
    
    # 2. Copy hal.h into the build directory
    shutil.copy(Path(__file__).with_name("hal.h"), outdir / "hal.h")
    print(f"wrote {c_path}  (kernel @{fname}, inputs {ins}, output {out})")

    # 3. Handle optional Cross-Compilation step
    if a.no_compile or not shutil.which(a.cc):
        return

    hal_src_path = Path(a.hal_src)
    if not hal_src_path.exists():
        sys.exit(f"Error: HAL source file '{hal_src_path}' not found.")

    elf = outdir / f"{a.name}.elf"
    flags = [
        "-O2",
        f"-march={a.march}",
        f"-mabi={a.mabi}",
        f"-DHAL_NUM_CORES={a.num_cores}",
        "-nostdlib",
        "-ffreestanding",
        "-fno-tree-loop-distribute-patterns"
    ]
    
    # Link harness C file together with selected hal.c implementation
    run([a.cc, *flags, "-I", str(outdir), "-o", str(elf), str(c_path), str(hal_src_path), "-lgcc"])
    print(f"wrote {elf}")


if __name__ == "__main__":
    main()