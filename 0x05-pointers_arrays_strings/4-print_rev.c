#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
