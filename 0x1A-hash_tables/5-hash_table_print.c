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
		if (ht->array[i] != NULL)
		{
			current =  ht->array[i];
			while (current != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", current ->key, current->value);
				current = current->next;
				count++;
			}
		}
	}
	printf("}\n");
}
