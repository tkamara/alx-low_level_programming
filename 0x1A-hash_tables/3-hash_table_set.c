#include "hash_tables.h"
/**
 * free_node - function to free a node
 * @node: the node to be freed
 *
 * Return: none
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - adds element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *current;

	if (key == NULL || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = new;
	else
	{
		current = ht->array[i];
		if (strcmp(current->key, key) == 0)
		{
			new->next = current->next;
			ht->array[i] = new;
			free_node(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
		{current = current->next;
		}
		if (strcmp(current->key, key) == 0)
		{
			new->next = current->next->next;
			free_node(current->next);
			current->next = new;
		}
		else
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	return (1);
}
