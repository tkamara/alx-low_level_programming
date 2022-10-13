#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
