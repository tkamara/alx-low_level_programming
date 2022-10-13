#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched through
 * @size: size of array
 * @cmp: pointer to function to compare values
 *
 * Return: index of first element, -1 for no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
