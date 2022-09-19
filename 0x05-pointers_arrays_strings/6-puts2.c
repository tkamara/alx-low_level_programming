#include "main.h"

/**
 * puts2 - function to print every other character of a string
 * @str: string to be printed
 *
 * Return: none
 */

void puts2(char *str)
{
	int counter, i, j;

	counter = 0;
	i = 0;
	j = i + 2;
	while (*str != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i = j)
	{
		_putchar(str[i]);
	}
}
