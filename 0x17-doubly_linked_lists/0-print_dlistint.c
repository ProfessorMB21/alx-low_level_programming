#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list
*
* @h: pointer to start of a dlistint_t list
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
