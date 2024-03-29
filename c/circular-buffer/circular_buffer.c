#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

#include "circular_buffer.h"

circular_buffer_t *new_circular_buffer(int capacity)
{ 
    circular_buffer_t *buffer = malloc(sizeof(circular_buffer_t));
    buffer->start = 0;
    buffer->end = 0;
    buffer->len = 0;
    buffer->cap = capacity;
    buffer->data = malloc(sizeof(buffer_value_t) * capacity);

    return buffer;
}

void delete_buffer(circular_buffer_t *buffer)
{ 
    if (buffer == NULL) return;

    free(buffer->data);
    free(buffer);
}

int16_t write(circular_buffer_t *buffer, buffer_value_t value)
{ 
    if (buffer == NULL) return 1;

    if (buffer->len == buffer->cap) { // buffer full
        errno = ENOBUFS;
        return EXIT_FAILURE;
    }

    buffer->data[buffer->end] = value;
    buffer->end = (buffer->end + 1) % buffer->cap;
    buffer->len++;

    return 0;
}

int16_t overwrite(circular_buffer_t *buffer, buffer_value_t value)
{ 
    if (buffer == NULL) return 1;

    buffer->data[buffer->end] = value;
    buffer->end = (buffer->end + 1) % buffer->cap;

    if (buffer->len == buffer->cap) { // buffer full
        buffer->start = (buffer->start + 1) % buffer->cap;
    } else {
        buffer->len++;
    }

    return 0;
}

int16_t read(circular_buffer_t *buffer, buffer_value_t *value)
{ 
    if (buffer == NULL) return 1;
    
    if (buffer->len == 0) { // buffer empty
        errno = ENODATA;
        return EXIT_FAILURE;
    }

    *value = buffer->data[buffer->start];
    buffer->start = (buffer->start + 1) % buffer->cap;
    buffer->len--;

    return 0;
}

void clear_buffer(circular_buffer_t *buffer)
{
    if (buffer == NULL) return;

    buffer->start = 0;
    buffer->end = 0;
    buffer->len = 0;
}

