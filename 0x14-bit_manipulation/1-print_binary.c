#include "main.h"

/**
 * print_binary - print binary rep of number
 * @n: the integer(decimal)
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int div = 0;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	div = n % 2;
	_putchar((div) + '0');
}
