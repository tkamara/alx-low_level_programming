#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: string to be printed
 *
 * Return: none
 */

void puts2(char *str)
{
	int counter, i;

	counter = _strlen(str);

	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - function to determine length of string
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
