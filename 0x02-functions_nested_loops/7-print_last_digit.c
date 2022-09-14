#include "main.h"

/**
 * print_last_digit - printing last digit of a number
 * @d: number to check
 *
 * Return: last digit
 */

int print_last_digit(int d)
{
	int e;

	e = d % 10;

	if (e < 0)
	{
		e = -e;
		_putchar(e + '0');
	}
	return (e);
}
