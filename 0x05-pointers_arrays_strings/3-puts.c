#include "main.h"

/**
 * _puts - printing string to stdout
 * @str: string to be printed
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		_putchar('\n');
	}
}
