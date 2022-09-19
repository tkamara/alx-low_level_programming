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

	counter = 0;
	while (*str != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i += 2)
	{
		_putchar(str[i]);
	}
}
