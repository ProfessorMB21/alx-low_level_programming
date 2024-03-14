#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: The hash table to look up
 * @key: The key whose value is to be returned
 *
 * Return: The value associated with the element,
 * 	   otherwise NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((node == NULL) ? NULL : node->value);
}

