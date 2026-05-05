#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 * @key: The key to get the index of
 * @size: The size of the hash table
 *
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
