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
	char buffer[10] = "_putchar\n";

	write(1, buffer, sizeof(buffer));

	return (0);
}

/**
 * print_alphabet - function toprint lowercase letters
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch < 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

#endif
