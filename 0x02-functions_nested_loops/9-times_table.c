#include "main.h"

/**
 * times_table - printing times table
 *
 * Return:none
 */

void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			_putchar(j * '9');
			_putchar(44);
			_putchar(32);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
