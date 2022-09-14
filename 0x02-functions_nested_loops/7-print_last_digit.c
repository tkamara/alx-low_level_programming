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
	_putchar('0' + e);
	return (e);
}
