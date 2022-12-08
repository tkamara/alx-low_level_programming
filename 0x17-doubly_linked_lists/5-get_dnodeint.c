#include "lists.h"

/**
 * get_dnodeint_at_index - return node at index in linked list
 * @head: head pointer of the linked list
 * @index: index of node to return
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}

