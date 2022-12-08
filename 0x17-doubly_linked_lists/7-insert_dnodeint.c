#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: head pointer to the list
 * @idx: index where new node is added
 * @n: value of new node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold = *h, *new;

	new = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for(; idx != 1; idx--)
	{
		hold = hold->next;
		if (hold == NULL)
		{
			return (NULL);
		}
	}

	if (hold->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = hold;
	new->next = hold->next;
	hold->next->prev = new;
	hold->next = new;

	return (new);
}
