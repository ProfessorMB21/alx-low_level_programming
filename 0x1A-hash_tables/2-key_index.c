#include "hash_tables.h"

/**
 * key_index - Returns the index of a key
 *
 * @key: The key to get the index of
 * @size: The size of the array of the hash table
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

