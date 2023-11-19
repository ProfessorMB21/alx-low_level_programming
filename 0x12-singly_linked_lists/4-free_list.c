#include "list.h"

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
		free((head->next->str));
		free((head->next));
		head = temp;
	}
}
