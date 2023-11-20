#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of
* a linked listint_t list
*
* @head: pointer to head of the linked list
* @n: integer
*
* Return: the address of the new node, otherwise NULL (fail)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	/** declarations */
	listint_t *node;

	/** allocate memory to new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *(head);
	*(head) = node;
	
	return (*(head));
}
