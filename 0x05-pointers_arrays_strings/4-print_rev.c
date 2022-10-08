#include "main.h"

/**
 * print_rev - printing string in reverse
 * @s: string to be printed
 *
 * Return: none
 */

void print_rev(char *s)
{
	int length, counter;

	length = _strlen(s);
	counter = length - 1;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}

/**
 * _strlen - function to find length of string
 * @s: string to find length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
