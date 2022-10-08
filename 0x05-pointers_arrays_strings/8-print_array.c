#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements in an array of integers
 * @a: the array
 * @n: the number of elements
 *
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}

