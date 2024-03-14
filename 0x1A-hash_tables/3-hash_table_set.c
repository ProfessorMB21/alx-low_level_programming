#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table where to add or update the key/value to
 * @key: The key of the element to be added (non-empty string)
 * @value: The value of the element associated with the key
 *
 * Return: 1 (success), otherwise 0
 * [Description] In case of collision, the function adds the new element
 * 		at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_el;
	char *value_cpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		/** check for a collision */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	new_el = malloc(sizeof(hash_node_t));
	if (new_el == NULL)
	{
		free(value_cpy);
		return (0);
	}

	new_el->key = strdup(key);
	if (new_el->key == NULL)
	{
		free(new_el);
		return (0);
	}
	new_el->value = value_cpy;
	new-el->next = ht->array[index];
	ht->array[index] = new_el;

	return (1);
}

