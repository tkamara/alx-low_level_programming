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
	char buffer[9] = "_putchar ";

	write(1, buffer, sizeof(buffer));

	return (0);
}

#endif
