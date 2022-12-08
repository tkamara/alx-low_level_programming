#include "lists.h"

/**
 * dlistint_len - return number of elements in a linked list
 * @h: head pointer of the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
