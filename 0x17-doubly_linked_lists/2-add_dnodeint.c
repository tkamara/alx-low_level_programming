#include "lists.h"

/**
 * add_dnodeint - function to add node at beginning of list
 * @head: head pointer to the list
 * @n: value of the new node
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
	}
	new->next = *head;
	*head = new;

	return (new);
}
