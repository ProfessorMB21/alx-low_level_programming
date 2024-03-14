#include "hash_table.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the array
 *
 * Returns: a pointer to a newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/** alloc mem to ht */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	
	ht->size = size;
	ht->array = malloc(sizeof(hast_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

