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
	int counter;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	for (; counter < n; counter++)
	{
		dest[counter] = '\0';
	}
	return (dest);
}
