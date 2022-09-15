#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 *
 * Return: none
 */

void more_numbers(void)
{
	int i, counter, div, rem;

	for (counter = 0; counter < 10; counter++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				div = i / 10;
				_putchar(div + '0');
			}
			rem = i % 10;
			_putchar(rem + '0');
		}
		_putchar('\n');
	}
}
