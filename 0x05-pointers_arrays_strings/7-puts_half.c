#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to be printed in half
 *
 * Return: void
 */

void puts_half(char *str)
{
	/*determine length of string*/
	int length, i;

	length = _strlen(str);
	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - determine length of string
 * @s: string to determine length of
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

