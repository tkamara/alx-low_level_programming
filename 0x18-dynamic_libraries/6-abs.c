#include "main.h"

/**
 * _abs - function to print absolute value of integer
 *
 * @a: integer to be checked
 *
 * Return: integer
 */

int _abs(int a)
{
	if (a < 0)
	{
		int b;

		b = a * (-1);
		return (b);
	}
	else
	{
		return (a);
	}
}
