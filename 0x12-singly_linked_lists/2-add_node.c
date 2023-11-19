#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
*
* @head: pointer to head pointer of the list
* @str: string
*
* NOTE: @str is duplicated
*
* Return: address of the new node, otherwise NULL (fail)
*/
list_t *add_node(list_t **head, const char *str)
{
	/* declarations */
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (*(head) != NULL)
	{
		if (!str)
		{
			free(node);
			return (NULL);
		}

		while (str[len])
			len++;

		node->str = strdup(str);
		node->len = len;
		node->next = *(head);
	}
	*(head) = node;

	return (*(head));
}
