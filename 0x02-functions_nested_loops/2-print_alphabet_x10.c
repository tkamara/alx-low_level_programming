#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: none
 */

void print_alphabet_x10(void)
{
	char lc_10;
	int i;

	i = 0;
	while (i < 10)
	{
		for (lc_10 = 97; lc_10 < 123; lc_10++)
		{
			_putchar(lc_10);
		}
		_putchar('\n');

	i++;
	}
}
