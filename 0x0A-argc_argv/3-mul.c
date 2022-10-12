#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplying two numbers
 * @argc: argument count
 * @argv: array of pointers to string arguments
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, mult;

	mult = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

