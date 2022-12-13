#include "main.h"

/**
 * _islower - checks if letter is lowercase
 *
 * @c: integer to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
