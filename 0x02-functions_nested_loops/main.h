#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes the character to standard output
 *
 * @ch:  character to be printed
 * Return: zero
 */

int _putchar(char ch)
{
	return (write(1, &ch, sizeof(ch)));

}

/**
 * print_alphabet - function toprint lowercase letters
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#endif
