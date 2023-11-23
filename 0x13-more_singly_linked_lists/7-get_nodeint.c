#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list
*
* @head: pointer to first node in the linked list
* @index: the index of the node
*
* Return: the nth node, otherwise NULL (if node does not exist)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_i = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (node_i == index)
			return (curr);
		curr = curr->next;
		node_i++;
	}
	return (NULL);
}
