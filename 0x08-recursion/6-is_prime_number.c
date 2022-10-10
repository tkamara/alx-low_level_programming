#include "main.h"

/**
 * is_prime_number - function to check if number is prime
 * @n: number to check
 *
 * Return: 1 if prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (calculate(n, 2));
	}
}

/**
 * calculate - calculates prime number
 * @a: number to calculate prime
 * @b: iterator
 *
 * Return: square root
 */

int calculate(int a, int b)
{
	if (b < a)
	{
		if (b % a != 0)
		{
			calculate(a, b + 1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
