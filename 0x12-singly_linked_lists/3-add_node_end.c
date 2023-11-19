#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list
*
* @head: pointer to head pointer of the list
* @str: string
*
* NOTE: @str is duplicated
*
* Return: address of the new node, otherwise NULL (fail)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* declarations */
	unsigned int len = 0;
	list_t *node, *temp;

	temp = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (*(head) != NULL)
	{
		if (str == NULL)
		{
			free(node);
			return (NULL);
		}

		/* get length of str */
		while (str[len])
		{
			len++;
		}

		node->str = strdup(str);
		node->len = len;
		node->next = NULL;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	} else
	{
		*(head) = node;
		return (node);
	}

	return (node);
}
