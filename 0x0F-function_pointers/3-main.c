#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: array of string arguments
 *
 * Return: 0
 */

int main(int argc, char *argv)
{
	int x, y;
	int (*z)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = get_op_func(argv[2]);

	if (argv[2][1] != '\0' || z == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", z(x, y));

	return (0);
}


