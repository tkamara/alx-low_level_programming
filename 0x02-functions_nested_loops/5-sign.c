#include "main.h"

/**
 * print_sign - checks if number is positive, negative or zero
 * @n: number to be checked
 *
 * Return: 1 for positive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
