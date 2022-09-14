#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function printing all natural numbers from n to 98
 *
 * @n: integer to be checked
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("98\n");
	}

}
