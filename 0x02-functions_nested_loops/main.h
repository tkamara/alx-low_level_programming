#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes the character to
 * @c: The character to print
 *
 * Return: zero
 */

int _putchar(void)
{
	char buffer[12] = "_putchar\n";

	return (write(1, buffer, sizeof(buffer)));
}

#endif
