#include "main.h"

/**
 * _sqrt_recursion - function to get natural square root of a number
 * @n: the number
 *
 * Return: natural square root if it exists, if not, return -1
 */

int _sqrt_recursion(int n)
{
	int ans, checker;

	ans = 0, checker = 1;
	ans = calculator(n, checker);
	if (ans == -1)
	{
		return (-1);
	}
	else
	{
		return (ans);
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

