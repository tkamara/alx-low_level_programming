#include "main.h"

/**
 * _islower - checks if letter is lowercase
 *
 * @c: integer to be checked
 *
 * Return: 0 if lowercase, 1 otherwise
 */

int _islower(int c)
{
	if (c < 97 && c > 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
