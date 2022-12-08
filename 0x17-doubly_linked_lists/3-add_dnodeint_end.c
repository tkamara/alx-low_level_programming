#include "lists.h"

/**
 * add_dnodelist_end - function that adds new node at end of list
 * @head: head pointer of the list
 * @n: value of node to add
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (end->next)
		{
			end = end->next;
		}
		end->next = new;
		new->prev = end;
	}

	return (new);
}

