#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: pointer to strings
 * @n: number of strings
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list s;
	char *str;

	va_start(s, n);
	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && counter != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(s);
}
