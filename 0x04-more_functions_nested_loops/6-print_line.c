#include "main.h"

/**
 * print_line - print line on terminal
 * @n: number of times to print line
 *
 * Return: none
 */

void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
