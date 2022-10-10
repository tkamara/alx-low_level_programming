#include "main.h"

/**
 * _sqrt_recursion - function to get natural square root of a number
 * @n: the number
 *
 * Return: natural square root if it exists, if not, return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (calculator(n, 1));
	}
}

/**
 * calculator - function to determine square root
 * @a: first integer
 * @b: second integer
 *
 * Return: square root
 */

int calculator(int a, int b)
{
	if (a / b == b && a % b == 0)
	{
		return (b);
	}
	else if (a / b < b)
	{
		return (-1);
	}
	else
	{
		return (calculator(a, b + 1));
	}
}

