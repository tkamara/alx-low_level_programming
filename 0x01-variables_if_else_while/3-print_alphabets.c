#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in upper and lowercase
 *
 * Return: zero
 */

int main(void)
{
	char uc, lc;

	for (lc = 97; lc < 123; lc++)
	{
		putchar(lc);
	}
	for (uc = 65; uc < 91; uc++)
	{
		putchar(uc);
	}
	putchar('\n');

	return (0);
}
