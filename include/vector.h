#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    void *data;
    size_t size;
    size_t capacity;
    size_t elem_size;
} Vector;

Vector* vector_create(size_t elem_size, size_t capacity);
void vector_destroy(Vector *v);
void vector_push_back(Vector *v, void *elem);
void vector_pop_back(Vector *v);
void* vector_get(Vector *v, size_t index);
void vector_set(Vector *v, size_t index, void *elem);
size_t vector_size(Vector *v);
size_t vector_capacity(Vector *v);

#endif

