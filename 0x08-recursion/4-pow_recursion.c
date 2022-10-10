#include "main.h"

/**
 * _pow_recursion - function that raises x to power y
 * @x: integer to be powered
 * @y: the power
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
