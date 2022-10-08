#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be printed in reverse
 *
 * Return: none
 */

void rev_string(char *s)
{
	int counter, i;
	char temp;

	counter = _strlen(s);

	for (i = 0; i < counter / 2; i++)
	{
		temp = s[i];
		s[i] = s[counter - i - 1];
		s[counter - i - 1] = temp;
	}
}

/**
 * _strlen - function to determine length of string
 * @s: string to determine length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
