/*
 * hal.h -- Hardware Abstraction Layer for RV64GC Core
 * Target: SST Vanadis / qemu-riscv64 / Bare-metal RISC-V
 */
#ifndef HAL_H
#define HAL_H

#include <stddef.h>
#include <stdint.h>

#ifndef HAL_NUM_VAULTS
#define HAL_NUM_VAULTS 8
#endif
#ifndef HAL_DEFAULT_VAULT_ID
#define HAL_DEFAULT_VAULT_ID 0
#endif

/* ---------------- Raw Syscalls (RISC-V Linux ABI) ---------------- */
#define HAL_SYS_WRITE      64
#define HAL_SYS_EXIT_GROUP 94

static inline long hal_syscall3(long n, long a0, long a1, long a2) {
    register long x17 __asm__("a7") = n;
    register long x10 __asm__("a0") = a0;
    register long x11 __asm__("a1") = a1;
    register long x12 __asm__("a2") = a2;
    __asm__ volatile("ecall" : "+r"(x10) : "r"(x17), "r"(x11), "r"(x12) : "memory");
    return x10;
}

static inline void hal_exit(int code) __attribute__((noreturn));
static inline void hal_exit(int code) {
    hal_syscall3(HAL_SYS_EXIT_GROUP, code, 0, 0);
    for (;;) { }
}

/* Explicit function alias for MLIR harness calls */
static inline void force_exit_group(int code) __attribute__((noreturn));
static inline void force_exit_group(int code) {
    hal_exit(code);
}

static inline void hal_puts(const char *s) {
    size_t n = 0;
    while (s[n]) n++;
    hal_syscall3(HAL_SYS_WRITE, 1, (long)s, (long)n);
}

static inline void hal_putu(unsigned long v) {
    char buf[24];
    int i = 23;
    buf[i] = 0;
    do { buf[--i] = (char)('0' + v % 10); v /= 10; } while (v);
    hal_puts(&buf[i]);
}

/* ---------------- Vault Identity ---------------- */
static int hal__vault_id   __attribute__((unused)) = HAL_DEFAULT_VAULT_ID;
static int hal__num_vaults __attribute__((unused)) = HAL_NUM_VAULTS;

static inline int hal__parse_int(const char *s) {
    int v = 0;
    while (*s >= '0' && *s <= '9') v = v * 10 + (*s++ - '0');
    return v;
}

static inline int hal__has_prefix(const char *s, const char *p) {
    while (*p) { if (*s++ != *p++) return 0; }
    return 1;
}

static inline void hal_init(int argc, char **argv) {
#ifdef HAL_VAULT_ID_MMIO_ADDR
    hal__vault_id = (int)*(volatile uint32_t *)(uintptr_t)(HAL_VAULT_ID_MMIO_ADDR);
    (void)argc; (void)argv;
#else
    for (int i = 1; i < argc; i++) {
        if (hal__has_prefix(argv[i], "--vault-id="))
            hal__vault_id = hal__parse_int(argv[i] + 11);
        else if (hal__has_prefix(argv[i], "--num-vaults="))
            hal__num_vaults = hal__parse_int(argv[i] + 13);
    }
#endif
}

static inline int hal_vault_id(void)   { return hal__vault_id; }
static inline int hal_num_vaults(void) { return hal__num_vaults; }

/* ---------------- Buffer Interaction API ---------------- */

typedef struct {
    void *host_ptr;      /* CPU virtual memory pointer */
    uintptr_t hw_addr;   /* Memory bus address */
    size_t size_bytes;   /* Buffer allocation size */
    int is_const;        /* Read-only flag */
} hal_buffer_t;

/* Creates/wraps a buffer handle */
static inline hal_buffer_t hal_buffer_create(void *data, size_t size_bytes, int is_const) {
    hal_buffer_t buf;
    buf.host_ptr = data;
    buf.hw_addr = (uintptr_t)data; /* Direct flat memory mapping for RV64 CPU */
    buf.size_bytes = size_bytes;
    buf.is_const = is_const;
    return buf;
}

/* Synchronize CPU memory to hardware (No-op on shared RAM) */
static inline void hal_buffer_write(hal_buffer_t *dst, const void *src, size_t size_bytes) {
    if (dst->host_ptr != src) {
        char *d = (char *)dst->host_ptr;
        const char *s = (const char *)src;
        for (size_t i = 0; i < size_bytes; i++) d[i] = s[i];
    }
}

/* Synchronize hardware memory to CPU (No-op on shared RAM) */
static inline void hal_buffer_read(void *dst, const hal_buffer_t *src, size_t size_bytes) {
    if (dst != src->host_ptr) {
        char *d = (char *)dst;
        const char *s = (const char *)src->host_ptr;
        for (size_t i = 0; i < size_bytes; i++) d[i] = s[i];
    }
}

/* Abstract element getter for harness validation */
static inline float hal_read_elem_f32(const hal_buffer_t *buf, size_t index) {
    return ((const float *)buf->host_ptr)[index];
}

/* ---------------- Freestanding Startup ---------------- */
#ifdef HAL_NO_LIBC
extern int main(int, char **);

void hal__start_c(long *sp) __attribute__((noreturn));
void hal__start_c(long *sp) {
    int argc = sp ? (int)sp[0] : 0;
    char **argv = sp ? (char **)(sp + 1) : NULL;
    hal_exit(main(argc, argv));
}

__asm__(
    ".section .text._start\n"
    ".globl _start\n"
    "_start:\n"
    "  mv   a0, sp\n"
    "  andi sp, sp, -16\n"
    "  tail hal__start_c\n"
);
#endif

#endif /* HAL_H */