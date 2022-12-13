#include "main.h"

/**
 * _strcat -function that concatenates two strings
 * @dest: destination pointer
 * @src: string to be appended
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{

	int length, counter;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[length] = src[counter];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
