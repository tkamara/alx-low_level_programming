#include "main.h"

/**
 * _print_rev_recursion - print string recursively in reverse
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		return;
	}
}
