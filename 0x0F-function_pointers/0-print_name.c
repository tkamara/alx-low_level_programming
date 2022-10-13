#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to function
 * @s: string of name
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *s))
{
	f(name);
}
