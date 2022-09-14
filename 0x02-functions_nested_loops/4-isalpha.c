#include "main.h"

/**
 * _isalpha - checks for alhpabetic character
 * @c : integer to be checked
 *
 * Return: 1 if alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
