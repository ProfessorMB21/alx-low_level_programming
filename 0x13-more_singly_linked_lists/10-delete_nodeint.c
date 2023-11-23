#include "lists.h"

/**
* delete_nodeint_at_index - Deletes node at index of a listint_t linked list
*
* @head: pointer to head of the linked list
* @index: index of the node to delete
*
* Return: 1 (success), otherwise -1 (fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node = NULL, *curr = *head;
	unsigned int idx = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		if (index == (idx + 1))
		{
			/**
			* we point the current node at (index - 1)
			* to the node at index (index + 1) so that
			* we don't lose the other part of the list
			*/
			temp = curr->next;
			node->next = temp->next; /** temp->next == curr->next->next */
			curr->next = node;
			free(temp);
			return (1);
		}
		curr = curr->next;
		idx++;
	}
	return (-1);
}
