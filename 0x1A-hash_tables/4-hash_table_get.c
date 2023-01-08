#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: the hash table
 * @key: the key being looked for
 *
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	current = ht->array[i];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current->value);
	}
}
