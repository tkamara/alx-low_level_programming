#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing alphabet in reverse and lowercase
 *
 * Return: 0
 */

int main(void)
{
	char lc;

	for (lc = 122; lc > 96; lc--)
	{
		putchar(lc);
	}
	putchar('\n');

	return (0);

}
