#include "lists.h"

/**
* free_list - Frees a list_t list
*
* @head: pointer to head of a list_t list
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free((head->str));
		free((head));
		head = temp;
	}
}
