#include "search_algos.h"

/**
 * binary_search_two - function to conduct binary search
 * @array: the array to search through
 * @value: the value searched for
 * @low: the lower bound
 * @high: the upper bound
 * Return: the index of found element
 */

int binary_search_two(int *array, int value, int low, int high)
{
	int i, mid;

	while (high >= low)
	{
		printf("Searching through array:");
		for (i = low; i < high; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[high]);

		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * binary_search - function to do binary search using binary_search_two
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value looked for
 * Return: the index of found value
 */

int binary_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (binary_search_two(array, value, 0, (int)size - 1));
}
