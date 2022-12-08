#include "lists.h"

/**
 * sum_dlistint - return sum of all data in list
 * @head: head pointer of list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
