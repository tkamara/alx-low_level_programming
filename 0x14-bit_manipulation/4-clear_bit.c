#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: the number
 * @index: the counter
 *
 * Return: 1 if worked, -1 if didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n = ~(1 << index) & *n;

	return (1);
}
