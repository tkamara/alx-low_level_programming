#include "main.h"
#include <unistd.h>

/**
 * _putchar - print to std output
 * @ch: character to print
 *
 * Return: 1 on success
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
