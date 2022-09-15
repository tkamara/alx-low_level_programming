#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 *
 * Return: none
 */

void print_most_numbers(void)
{
	char d;

	for (d = 48; d < 58; d++)
	{
		if (d != 50 && d != 52)
		{
			_putchar(d);
		}
	}
	_putchar('\n');

}
