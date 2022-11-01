#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: number
 * @index: the counter
 *
 * Return: 1 if worked, -1 if it didn't
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 32)
	{
		return (-1);
	}

	*n = (1 << index) | *n;

	return (1);
}
