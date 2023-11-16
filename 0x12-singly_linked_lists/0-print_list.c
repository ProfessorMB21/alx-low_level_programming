#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list
* @h: pointer to first node of the list
*
* NOTE: If @str is NULL, print [0] (nil)
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	/* declarations */
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/* check if str is null*/
		if (h->str == NULL)
		{
			printf("[%d] (nil)", 0);
		} else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;	/* go to next node */
		count++;
	}
	printf("[%d] %s\n", h->len, h->str);	/* print last node */

	return (count);
}
