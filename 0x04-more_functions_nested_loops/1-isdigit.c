#include "main.h"

/**
 * _isdigit - function to check if it's a digit
 * @c: digit to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
