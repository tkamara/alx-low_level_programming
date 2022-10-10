#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number
 *
 * Return: -1 if n is lower than 0, else return the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
