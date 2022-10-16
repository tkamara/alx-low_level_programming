#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function to sum all its parameters
 * @n: the integers
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, counter;
	va_list p;

	va_start(p, n);
	sum = 0;

	for (counter = 0; counter < n; counter++)
	{
		sum += va_arg(p, unsigned int);
	}

	va_end(p);

	return (sum);
}
