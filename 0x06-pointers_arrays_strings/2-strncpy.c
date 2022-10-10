#include "main.h"

/**
 * _strncpy - funciton that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
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
