#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at an index in list
 * @head: head pointer to the list
 * @index: index of node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	for (; index != 0; index--)
	{
		if (hold == NULL)
		{
			return (-1);
		}
		hold = hold->next;
	}

	if (hold == *head)
	{
		*head = hold->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		hold->prev->next = hold->next;
		if (hold->next)
		{
			hold->next->prev = hold->prev;
		}
	}

	free(hold);
	return (1);
}



