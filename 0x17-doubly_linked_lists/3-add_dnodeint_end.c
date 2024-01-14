#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list
*
* @head: pointer to start of list
* @n: integer
*
* Return: the address of the new node, otherwise NULL (fail)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *node = create_dnodeint(n);

	/** check if list is empty */
	if (temp == NULL)
		*head = node;
	else
	{
		/** traverse to the end of the list */
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
		node->prev = temp;
	}
	return (node);
}
