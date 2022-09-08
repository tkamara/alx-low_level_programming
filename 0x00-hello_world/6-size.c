#include <stdio.h>

/**
 * main - determine size of data types
 *
 * Return: zero
 */

int main(void)
{
	char c;
	int i;
	float f;
	long long int l;
	long int d;

	printf("Size of a char: %d byte(s) \n", sizeof(c));
	printf("Size of an int: %d byte(s) \n", sizeof(i));
	printf("Size of a long int: %d byte(s) \n", sizeof(d));
	printf("Size of a long long int: %d byte(s) \n", sizeof(l));
	printf("Size of a float: %d byte(s) \n", sizeof(f));

	return (0);

}
