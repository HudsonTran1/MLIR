/*
 * hal.h -- Hardware Abstraction Layer API
 */
#ifndef HAL_H
#define HAL_H

#include <stddef.h>
#include <stdint.h>

typedef struct {
    void *host_ptr;      /* CPU virtual memory pointer */
    uintptr_t hw_addr;   /* Memory bus address */
    size_t size_bytes;   /* Buffer allocation size */
    int is_const;        /* Read-only flag */
} hal_buffer_t;

/* Core Lifecycle & Execution */
void hal_init(int argc, char **argv);
int hal_vault_id(void);
int hal_num_vaults(void);
void force_exit_group(int code) __attribute__((noreturn));

/* IO Abstractions */
void hal_puts(const char *s);
void hal_putu(unsigned long v);

/* Buffer API */
hal_buffer_t hal_buffer_create(void *data, size_t size_bytes, int is_const);
void hal_buffer_write(hal_buffer_t *dst, const void *src, size_t size_bytes);
void hal_buffer_read(void *dst, const hal_buffer_t *src, size_t size_bytes);
float hal_read_elem_f32(const hal_buffer_t *buf, size_t index);

#endif /* HAL_H */