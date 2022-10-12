#include <stdio.h>
#include "main.h"

/**
 * main - printing arguments followed by newline
 * @argc: argument count
 * @argv: array of pointers to string arguments
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
