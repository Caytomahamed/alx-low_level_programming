#ifndef FUNCTION_POINTER_HEADER
#define FUNCTION_POINTER_HEADER

#include <stdlib.h>

int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif