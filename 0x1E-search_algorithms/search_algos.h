#ifndef SEARCH_ALGOS_
#define SEARCH_ALGOS_

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);

int binary_search_two(int *array, int value, int low, int high);

int binary_search(int *array, size_t size, int value);

#endif
