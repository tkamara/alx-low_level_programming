#include "lists.h"

/**
 * list_len - function that returns number of elements
 * @h: the nodes
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
