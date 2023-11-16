#include "lists.h"

/**
* list_len - Returns the number of elements(nodes)
* in a linked list_t list
*
* @h: pointer to first node of the list
*
* Return: length of linked list
*/
size_t list_len(const list_t *h)
{
	list_t *current_node = h;
	size_t list_count;

	list_count = 0;
	while (current_node)
	{
		current_node = current_node->next;
		list_count++;
	}
	return (list_count);
}

