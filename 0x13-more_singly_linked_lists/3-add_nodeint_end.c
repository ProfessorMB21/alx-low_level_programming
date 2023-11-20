#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of
* a linked listint_t list
*
* @head: pointer to head of linked list
* @n: integer
*
* Returns: the address of the new node, otherwise NULL (fail)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** declarations */
	listint_t *node, *temp;

	/** allocate memory to new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	temp = *head;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*(head) = node;
		return (node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node;

	return (node);
}
