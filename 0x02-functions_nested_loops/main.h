#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * print - writes the character to standard output
 *
 * Return: zero
 */

int print(void)
{
	char buffer[12] = "_putchar\n";

	write(1, buffer, sizeof(buffer));

	return (0);
}

#endif
