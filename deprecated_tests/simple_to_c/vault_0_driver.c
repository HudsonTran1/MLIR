#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#ifndef SYS_exit_group
#define SYS_exit_group 94
#endif

#define TARGET_VAULT_ID 0
#define VAULT_DRAM_BYTES 480
#define ROWS_PER_VAULT 1
#define TILE_SIZE 10

/* Forward declarations */
int main(void);
void force_exit_group(int status);

/* Memory region symbol defined by linker script/flags */
extern char __ram;

/* ============================================================================== */
/* 1. Core Entry Point (Must be at the top so it links at 0x10000) */
/* ============================================================================== */
__attribute__((naked, used))
void _start(void) {
    __asm__ __volatile__(
        ".option push\n\t"
        ".option norvc\n\t"           // Strictly enforce 32-bit instructions
        "la sp, __ram\n\t"           // Set stack pointer to RAM base
        "li t0, 0x00080000\n\t"       // Stack offset (512 KB)
        "add sp, sp, t0\n\t"
        "mv a0, zero\n\t"            // argc = 0
        "mv a1, zero\n\t"            // argv = NULL
        "call main\n\t"
        "tail force_exit_group\n\t"
        ".option pop\n\t"
    );
};

/* // Direct inline system call wrapper for exit_group (non-static for tail call visibility) */
void force_exit_group(int status)
{
  #if defined(__riscv)
    register long a0 __asm__("a0") = status;
    register long a7 __asm__("a7") = SYS_exit_group;
    __asm__ __volatile__("ecall" : : "r"(a0), "r"(a7) : "memory");
#elif defined(__mips__)
    register long a0 __asm__("$4") = status;
    register long v0 __asm__("$2") = SYS_exit_group;
    __asm__ __volatile__("syscall" : : "r"(a0), "r"(v0) : "memory");
#endif
    while (1); // Trap guard;
}

static float systolic_acc[1][10];
static uint8_t g_dram_buffer[VAULT_DRAM_BYTES] __attribute__((aligned(16)));

static inline void tile_mac_kernel(float * dram, uint32_t b_offset, uint32_t a_offset, int tile_m, int tile_k, int tile_n, bool clear_acc)
{
  if (clear_acc) memset(systolic_acc, 0, sizeof(systolic_acc));
  float *B = (float *)&dram[b_offset];
  float *A = (float *)&dram[a_offset];
  for (int m = 0; m < tile_m; m++)
    for (int n = 0; n < tile_n; n++)
      for (int k = 0; k < tile_k; k++)
        systolic_acc[m][n] += A[m * 10 + k] * B[k * 10 + n];
}

static inline void tile_drain_kernel(float * dram, uint32_t c_offset, int tile_m, int tile_n)
{
  float *C = (float *)&dram[c_offset];
  for (int m = 0; m < tile_m; m++)
    for (int n = 0; n < tile_n; n++)
      C[m * 10 + n] = systolic_acc[m][n];
}

void execute_vault_0_schedule(float * vault_dram)
{
  /* Step 000: Tile MAC */
  tile_mac_kernel(vault_dram, 0x00000028U, 0x00000000U, 1, 10, 10, true);
  /* Step 001: Drain Accumulator */
  tile_drain_kernel(vault_dram, 0x000001B8U, 1, 10);
}

int main()
{
  execute_vault_0_schedule((float *)g_dram_buffer);
  force_exit_group(0);
  return 0;
}