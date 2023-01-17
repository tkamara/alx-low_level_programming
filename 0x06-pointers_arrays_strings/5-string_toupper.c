#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @s: string
 *
 * Return: new string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	s[i] = '\0';

	return (s);
}
