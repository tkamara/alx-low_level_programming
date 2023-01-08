#include "hash_tables.h"

/**
 * key_index - function that gives index of a key
 * @key: the key
 * @size: the size of array of hash table
 *
 * Return: index where key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key) % size;
	return (value);
}
