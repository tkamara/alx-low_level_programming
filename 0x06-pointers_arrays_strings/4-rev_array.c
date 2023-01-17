#include "main.h"

/**
 * reverse_array - reverse contents of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	temp = 0;

	for (counter = 0; counter < (n / 2); counter++)
	{
		temp = a[counter];
		a[counter] = a[n - 1 - counter];
		a[n - 1 - counter] = temp;
	}
}

