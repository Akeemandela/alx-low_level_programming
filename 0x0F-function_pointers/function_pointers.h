#ifndef FUNCTION_POINTERS_H
<<<<<<< HEAD

#define FUNCTION_POINTERS_H



#include <stddef.h>

#include <stdio.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));



=======
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

>>>>>>> fb2d0c08677193185769a83810521a3b5a672f5e
#endif
