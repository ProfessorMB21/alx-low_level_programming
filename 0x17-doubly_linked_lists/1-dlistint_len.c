#include "lists.h"

/**
* dlistint_len - Returns the number of elements of a linked dlistint_t list
*
* @h: pointer to start of a dlistint_t list
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t list_len = 0;

	if (h == NULL)
		return (list_len);

	while (h)
	{
		h = h->next;
		list_len++;
	}
	return (list_len);
}
