#include "main.h"

/**
 * _strncat - concatenate two strings according to n bytes
 * @dest: destination string
 * @src: string to be added
 * @n: number of bytes from src
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, counter;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (counter = 0; counter < n; counter++)
	{
		dest[length] = src[counter];
		length++;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}
