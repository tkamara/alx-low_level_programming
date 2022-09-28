#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
