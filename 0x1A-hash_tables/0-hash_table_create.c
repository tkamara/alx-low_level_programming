#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: size of the array
 *
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_table_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_t->array[i] = NULL;
	}

	return (hash_t);
}
