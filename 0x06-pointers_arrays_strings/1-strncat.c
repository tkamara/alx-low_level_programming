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
	int length, length2, counter;

	length = 0, length2 = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[length] != '\0')
	{
		length2++;
	}

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	for (counter = length2; counter < n; counter++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
