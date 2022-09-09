#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hexadecimal numbers for 0-16
 *
 * Return: 0
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i) + '0');
	}
	for (ch = 97; ch < 103; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
