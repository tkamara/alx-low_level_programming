#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: count of arguments
 * @argv: array of pointer to strings arguments
 *
 * Return: zero
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
