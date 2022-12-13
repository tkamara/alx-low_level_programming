#include <unistd.h>

/**
 * _putchar - printing characters
 * @ch: character to be printed
 *
 * Return: 1 on success
 */

int _putchar(char ch)
{
	return(write(1, &ch, 1));
}
