#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: pointer to string
 * @n: number of integers
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list num;

	va_start(num, n);

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(num, unsigned int));

		if (separator != NULL && counter != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(num);
}
