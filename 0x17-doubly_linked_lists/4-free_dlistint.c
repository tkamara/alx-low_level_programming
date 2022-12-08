#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head pointer to the list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
