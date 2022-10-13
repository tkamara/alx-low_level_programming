#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *s))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
}
