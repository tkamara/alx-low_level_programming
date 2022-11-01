#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @n: the number
 * @index: counter
 *
 * Return: index or -1 if error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
