#include "search_algos.h"

/**
 * linear_search - function to search for a value in an array of ints
 * @array: the array to search for value
 * @size: the size of the array
 * @value: the value searched for
 * Return: the first index value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
