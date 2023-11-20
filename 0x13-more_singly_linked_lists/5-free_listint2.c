#include "lists.h"

/**
* free_listint2 - frees a linked listint_t list
*
* @head: points to head of the linked list
*
* NOTE: functions sets the @head to NULL
*
* Returns: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			curr = temp->next;
			free(temp);
			temp = curr;
		}

		/**set head to NULL after freeing list */
		*head = NULL;
	}
}
