#include "lists.h"

/**
* create_dnodeint - Create a new dlistint_t node
*
* @n: integer
*
* Return: address of new node, otherwise NULL
*/
dlistint_t *create_dnodeint(const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}


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
