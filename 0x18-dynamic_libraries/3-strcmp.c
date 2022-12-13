#include "main.h"

/**
 * _strcmp - function comparing two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if strings are equal, non-zero integer if not
 */

int _strcmp(char *s1, char *s2)
{
	int check;

	check  = 0;
	while (s1[check] != '\0' && s2[check] != '\0')
	{
		if (s1[check] != s2[check])
		{
			return (s1[check] - s2[check]);
		}
		check++;

	}

	return (s1[check] - s2[check]);
}
