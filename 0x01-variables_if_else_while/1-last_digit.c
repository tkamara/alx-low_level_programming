#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function determines if last digit is greater than 5 or less than 6
 *
 * Return: 0
 *
 */

int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	else if (rem != 0 && rem < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}
	else if (rem == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, rem);
	}

	return (0);
}
