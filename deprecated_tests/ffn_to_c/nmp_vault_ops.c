// nmp_vault_ops.c
#include "nmp_vault_ops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Example: Simulating a 1GB local vault DRAM and 32x32 systolic registers
static uint8_t *vault_memory = NULL;
static float systolic_acc[32][32];

void nmp_vault_init(int vault_id) {
    if (!vault_memory) {
        vault_memory = (uint8_t *)calloc(1, 1024 * 1024 * 1024); // 1GB DRAM
    }
    printf("[Vault %d] Hardware initialized.\n", vault_id);
}

void nmp_op_load_weights(uint32_t addr, uint32_t size, bool clear_acc) {
    if (clear_acc) {
        memset(systolic_acc, 0, sizeof(systolic_acc));
    }
    // TODO: Write your real HW MMIO write or simulation logic here
}

void nmp_op_stream_act(uint32_t addr, uint32_t size) {
    // TODO: Stream activations from vault_memory[addr] into systolic array
}

void nmp_op_drain(uint32_t addr, uint32_t size, bool final_drain) {
    // TODO: Drain systolic array output back to vault_memory[addr]
}

void nmp_op_add_bias(uint32_t addr, uint32_t size) {
    // TODO: Add 1D bias vector into memory
}