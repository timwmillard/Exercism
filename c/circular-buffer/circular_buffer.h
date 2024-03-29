#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <inttypes.h>

typedef int buffer_value_t;

typedef struct {
    buffer_value_t *data;
    int start;
    int end;
    int len;
    int cap;
} circular_buffer_t;

circular_buffer_t *new_circular_buffer(int capacity);
void delete_buffer(circular_buffer_t *buffer);
int16_t write(circular_buffer_t *buffer, buffer_value_t value);
int16_t overwrite(circular_buffer_t *buffer, buffer_value_t value);
int16_t read(circular_buffer_t *buffer, buffer_value_t *value);
void clear_buffer(circular_buffer_t *buffer);
void print_buffer(circular_buffer_t *buffer);
void print_raw_buffer(circular_buffer_t *buffer);

#endif
