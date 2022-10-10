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

	for (counter = 0; counter < n; counter++)
	{
		temp = a[counter];
		a[counter] = a[n];
		a[n] = temp;
		n--;
	}
}

