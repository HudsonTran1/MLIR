// nmp_vault_ops.h
#ifndef NMP_VAULT_OPS_H
#define NMP_VAULT_OPS_H

#include <stdint.h>
#include <stdbool.h>

// Initialize simulated hardware memory and registers
void nmp_vault_init(int vault_id);

// Custom execution logic defined by you
void nmp_op_load_weights(uint32_t addr, uint32_t size, bool clear_acc);
void nmp_op_stream_act(uint32_t addr, uint32_t size);
void nmp_op_drain(uint32_t addr, uint32_t size, bool final_drain);
void nmp_op_add_bias(uint32_t addr, uint32_t size);

#endif /* NMP_VAULT_OPS_H */