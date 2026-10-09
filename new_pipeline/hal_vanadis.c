/*
 * hal_vanadis.c -- Vanadis RISC-V 1-Vault-per-Core HAL Implementation
 */
#include "hal.h"

#ifndef HAL_NUM_CORES
#define HAL_NUM_CORES 1
#endif

#define HAL_SYS_WRITE      64
#define HAL_SYS_EXIT_GROUP 93  /* Linux ABI exit_group syscall */

static int g_vault_id = 0;
static int g_num_vaults = HAL_NUM_CORES;

/* ---------------- Low-Level RISC-V Syscalls ---------------- */

static inline long hal_syscall3(long n, long a0, long a1, long a2) {
    register long x17 __asm__("a7") = n;
    register long x10 __asm__("a0") = a0;
    register long x11 __asm__("a1") = a1;
    register long x12 __asm__("a2") = a2;
    __asm__ volatile("ecall" : "+r"(x10) : "r"(x17), "r"(x11), "r"(x12) : "memory");
    return x10;
}

/* ---------------- Execution Lifecycle ---------------- */

void force_exit_group(int code) {
    hal_syscall3(HAL_SYS_EXIT_GROUP, code, 0, 0);
    for (;;) { }
}

static inline int hal_parse_int(const char *s) {
    int v = 0;
    while (*s >= '0' && *s <= '9') v = v * 10 + (*s++ - '0');
    return v;
}

static inline int hal_has_prefix(const char *s, const char *p) {
    while (*p) { if (*s++ != *p++) return 0; }
    return 1;
}

void hal_init(int argc, char **argv) {
#ifdef HAL_VAULT_ID_MMIO_ADDR
    /* Read Hart ID / Core ID directly from hardware register if configured */
    g_vault_id = (int)*(volatile uint32_t *)(uintptr_t)(HAL_VAULT_ID_MMIO_ADDR);
    (void)argc; (void)argv;
#else
    /* Check CPU hartid via CSR register on bare-metal RISC-V */
    #if defined(__riscv)
    unsigned long hartid;
    __asm__ volatile ("csrr %0, mhartid" : "=r"(hartid) ::);
    g_vault_id = (int)hartid;
    #endif

    /* Command-line args override hardware defaults */
    for (int i = 1; i < argc; i++) {
        if (hal_has_prefix(argv[i], "--vault-id="))
            g_vault_id = hal_parse_int(argv[i] + 11);
        else if (hal_has_prefix(argv[i], "--num-vaults="))
            g_num_vaults = hal_parse_int(argv[i] + 13);
    }
#endif
}

int hal_vault_id(void)   { return g_vault_id; }
int hal_num_vaults(void) { return g_num_vaults; }

/* ---------------- IO API ---------------- */

void hal_puts(const char *s) {
    size_t n = 0;
    while (s[n]) n++;
    hal_syscall3(HAL_SYS_WRITE, 1, (long)s, (long)n);
}

void hal_putu(unsigned long v) {
    char buf[24];
    int i = 23;
    buf[i] = 0;
    do { buf[--i] = (char)('0' + v % 10); v /= 10; } while (v);
    hal_puts(&buf[i]);
}

/* ---------------- Buffer API ---------------- */

hal_buffer_t hal_buffer_create(void *data, size_t size_bytes, int is_const) {
    hal_buffer_t buf;
    buf.host_ptr = data;
    buf.hw_addr = (uintptr_t)data;
    buf.size_bytes = size_bytes;
    buf.is_const = is_const;
    return buf;
}

void hal_buffer_write(hal_buffer_t *dst, const void *src, size_t size_bytes) {
    if (dst->host_ptr != src) {
        char *d = (char *)dst->host_ptr;
        const char *s = (const char *)src;
        for (size_t i = 0; i < size_bytes; i++) d[i] = s[i];
    }
}

void hal_buffer_read(void *dst, const hal_buffer_t *src, size_t size_bytes) {
    if (dst != src->host_ptr) {
        char *d = (char *)dst;
        const char *s = (const char *)src->host_ptr;
        for (size_t i = 0; i < size_bytes; i++) d[i] = s[i];
    }
}

float hal_read_elem_f32(const hal_buffer_t *buf, size_t index) {
    return ((const float *)buf->host_ptr)[index];
}

/* ---------------- Freestanding Entry Point ---------------- */

#ifdef HAL_NO_LIBC
extern int main(int, char **);

void hal_start_c(long *sp) __attribute__((noreturn));
void hal_start_c(long *sp) {
    int argc = sp ? (int)sp[0] : 0;
    char **argv = sp ? (char **)(sp + 1) : NULL;
    force_exit_group(main(argc, argv));
}

__asm__(
    ".section .text._start\n"
    ".globl _start\n"
    "_start:\n"
    "  mv   a0, sp\n"
    "  andi sp, sp, -16\n"
    "  tail hal_start_c\n"
);
#endif