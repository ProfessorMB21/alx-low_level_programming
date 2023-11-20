#include "lists.h"

/**
* free_listint - Frees a linked listint_t list
*
* @head: points to the first node of the linked list
*
* Returns: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
