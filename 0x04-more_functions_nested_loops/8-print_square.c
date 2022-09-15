#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 *
 * Return: none
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size-1; column++)
		{
			_putchar(35);
		}
		_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
