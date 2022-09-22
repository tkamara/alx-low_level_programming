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
	char a[], b[];

	length = 0;
	a = dest;
	b = src;

	while (a[length] != '\0')
	{
		length++;
	}
	for (i = 0; b[i] != '\0'; i++; length++)
	{
		a[length] = b[i];
	}

	a[length] = '\0';

	_putchar(a);
}
