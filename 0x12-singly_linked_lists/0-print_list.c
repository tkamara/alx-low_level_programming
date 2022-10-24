#include "lists.h"
#include <stdio.h>

/**
 * print_list - fucntion that prints all elements of a list
 * @h: node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}

	return (count);
}
