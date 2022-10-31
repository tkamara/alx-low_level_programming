#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to binary numbers
 *
 * Return: converted number, 0 if not
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int counter = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[counter])
	{
		if (b[counter] > 49)
		{
			return (0);
		}
		else if (b[counter] == 49)
		{
			i <<= 1;
			i += 1;
		}
		else
		{
			i <<= 1;
		}
		counter++;
	}

	return (i);
}
