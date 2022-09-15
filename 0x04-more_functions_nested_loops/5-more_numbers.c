#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 *
 * Return: none
 */

void more_numbers(void)
{
	int i, counter;

	counter = 0;
	while (counter < 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');

		}
		_putchar('\n');
		counter++;
	}
}
