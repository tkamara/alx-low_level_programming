#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_puts_recursion(s++);
	}
}
