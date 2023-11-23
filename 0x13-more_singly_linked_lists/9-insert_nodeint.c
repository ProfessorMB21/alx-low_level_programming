#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position
*
* @head: pointer to the head of the linked list
* @idx: index to insert the new node
* @n: the data(n) of the new node
*
* NOTE: if it's not possible to add the new node at the index @idx,
* the function does not add the new node but returns NULL
*
* Return: the address of the new node, otherwise NULL (if fails)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *curr, *temp;
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	curr = *head;

	while (curr != NULL)
	{
		if ((index + 1) == idx)	/** node at index (idx - 1) */
		{
			temp = curr->next;
			node->next = temp; /**new node points to next node in list*/
			node->n = n;
			curr->next = node;
			free(temp);	/** we clean up garbage */
			return (node);
		}
		index++;
		curr = curr->next;
	}
	return (NULL);
}
