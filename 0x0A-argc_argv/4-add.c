#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - sum positive numbers
 * @argc: argument count
 * @argv: array of pointers to string arguments
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}

