#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to standard output
 *
 * @ch:  character to be printed
 * Return: zero
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));

}

