#include "main.h"

/**
 * swap_int - swapping two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
