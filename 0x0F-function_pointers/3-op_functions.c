#include "3-calc.h"

/**
 * op_add - addition operation
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
