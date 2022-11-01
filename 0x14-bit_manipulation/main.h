#ifndef MAIN_H_
#define MAIN_H_
#include <stddef.h>

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int _putchar(char ch);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);

#endif
