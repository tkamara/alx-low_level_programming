#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void print_rev(char *s)
{
	int counter, temp, i;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[counter - i - 1];
		s[counter - i - 1] = temp;
	}
}
