#include "lists.h"

/**
* listint_len - Returns the number of elements in a
* linked listint_t list
*
* @h: pointer to the first node of the linked list
*
* Returns: the number of nodes in a linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *curr_node = h;

	if (h == NULL)
		return (len);

	while (curr_node)
	{
		curr_node = curr_node->next;
		len++;
	}
	return (len);
}
