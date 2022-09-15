#include "main.h"

/**
 * print_triangle - printing triangle
 * @size: size of triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size - row; column++)
		{
			_putchar(32);
		}
		for (column = 1; column <= row; column++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
