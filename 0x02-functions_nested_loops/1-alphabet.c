#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: none
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 97; lc < 123; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');

}
