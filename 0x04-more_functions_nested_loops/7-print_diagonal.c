#include "main.h"

/**
 * print_diagonal - draw diagonal on the terminal
 * @n: number of times to print diagonal
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int counter, check;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			for (check = 0; check < counter; check++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
