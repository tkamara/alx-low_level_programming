#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL)
		{
			while (current != NULL)
			{
				if (count == 1)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				count = 1;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
