#include "main.h"

/**
 * _strcpy - copies string pointed by src to buffer pointed by dest
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
