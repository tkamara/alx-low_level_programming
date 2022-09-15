#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * return: none
 */

void print_numbers(void)
{
	char d;

	for (d = 48; d < 58; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
