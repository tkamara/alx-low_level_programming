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
	int counter, length1, length2;

	length1 = 0; length2 = 0;

	while (dest[length1] != '\0')
	{
		length1++;
	}

	while (src[length2] != '\0')
	{
		length2++;
	}

	for (counter = 0; counter < n; counter++)
	{
		dest[length1] = src[counter];
		length1++;
	}

	return (dest);

}
