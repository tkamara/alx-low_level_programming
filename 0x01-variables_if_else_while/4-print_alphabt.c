#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet except q and e
 *
 * Return: zero
 */

int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
	if (ch != 101 && ch != 113)
	{
	putchar(ch);
	}
	}
	putchar('\n');

	return (0);

}
