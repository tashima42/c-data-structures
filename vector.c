#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
  int size;
  int capacity;
  int *array;
} Vector;

Vector new_vector() {
  Vector v;
  v.size = 0;
  v.capacity = 10;
  v.array = malloc(v.capacity * sizeof(int));
  if (v.array == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(EXIT_FAILURE);
  }
  return v;
}

void append(Vector *v, int value) {
  if (v->size == v->capacity) {
    v->capacity *= 2;
    v->array = realloc(v->array, v->capacity * sizeof(int));
    if (v->array == NULL) {
      fprintf(stderr, "Memory reallocation failed\n");
      exit(EXIT_FAILURE);
    }
  }
  v->size++;
  v->array[v->size - 1] = value;
}

int get(Vector *v, int index) {
  if (index < 0 || index >= v->size) {
    fprintf(stderr, "Index out of bounds\n");
    exit(EXIT_FAILURE);
  }
  return v->array[index];
}

int pop(Vector *v) {
  v->size--;
  int value = v->array[v->size];
  v->array[v->size] = 0;
  return value;
}

int remove_at(Vector *v, int index) {
  if (index < 0 || index >= v->size) {
    fprintf(stderr, "Index out of bounds\n");
    exit(EXIT_FAILURE);
  }

  int value = v->array[index];

  for (int i = index; i < v->size - 1; i++) {
    v->array[i] = v->array[i + 1];
  }

  v->size--;

  return value;
}

void shrink_size(Vector *v) {
  if (v->size == v->capacity) {
    return;
  }
  v->capacity = v->size;
  v->array = realloc(v->array, sizeof(int) * v->size);
  if (v->array == NULL) {
    fprintf(stderr, "Memory reallocation failed\n");
    exit(EXIT_FAILURE);
  }
}

void pretty_print(Vector *v) {
  printf("[");
  for (int i = 0; i < v->size - 1; i++) {
    printf("%d, ", get(v, i));
  }
  printf("%d", get(v, v->size - 1));
  printf("]\n");
}

int vector_run() {
  Vector v = new_vector();
  append(&v, 1);
  append(&v, 2);
  append(&v, 3);
  append(&v, 4);
  append(&v, 5);

  shrink_size(&v);

  append(&v, 6);
  append(&v, 7);
  append(&v, 8);
  append(&v, 9);
  append(&v, 10);
  append(&v, 11);
  append(&v, 12);

  pretty_print(&v);

  printf("pop: %d\n", pop(&v));
  printf("pop: %d\n", pop(&v));

  remove_at(&v, 2);
  remove_at(&v, 0);
  pretty_print(&v);

  printf("size of array: %d\n", v.capacity);

  shrink_size(&v);

  printf("size of array: %d\n", v.capacity);

  return 0;
}
