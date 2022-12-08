#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head pointer to the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
