#include "main.h"
#include <unistd.h>

/**
 * main - printing lowercase alphabet
 *
 * Return: zero
 */

int main(void)
{
	char lc;

	for (lc = 97; lc < 123; lc++)
	{
		_putchar(lc);
	}
	_putchar(lc);

	return (0);
}
