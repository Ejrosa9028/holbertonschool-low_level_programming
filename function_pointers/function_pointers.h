#ifndef MAIN
#define MAIN

#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
extern size_t size;
int int_index(int *array, int size, int (*cmp)(int));
#endif
