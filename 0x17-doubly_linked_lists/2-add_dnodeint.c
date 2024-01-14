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
* add_dnodeint - Adds a node at the beginning of a dlistint_t list
*
* @head: pointer to start of list
* @n: integer
*
* Return: the address of the new node, otherwise NULL (fail)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *node = create_dnodeint(n);

	/** check if list is empty */
	if (temp == NULL)
	{
		*(head) = node;
	} else
	{
		temp->prev = node;
		node->next = temp;
		*head = node;
	}
	return (*head);
}
