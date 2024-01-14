#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
*
* @h: pointer to start of list
* @idx: index of the list where the new node is added
* @n: integer
*
* Return: new node, otherwise NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *curr = *h;
	dlistint_t *node = create_dnodeint(n);
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);

	while (curr != NULL)
	{
		if (count == (idx - 1))
		{
			temp = curr->next;
			node->next = temp;
			curr->next = node;
			node->prev = curr;
		}
		curr = curr->next;
		count++;
	}

	/**check if idx is out of range and at the end of list*/
	if ((count) == (idx - 1))
		return (add_dnodeint_end(h, n));

	return (NULL);
}
