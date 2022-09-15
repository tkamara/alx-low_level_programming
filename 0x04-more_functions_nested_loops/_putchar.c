#include <unistd.h>

/**
 * _putchar - writes charcter c to stdout
 * @c: The character to print
 *
 * Return: on success 1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
