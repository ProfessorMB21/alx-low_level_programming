#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list
* and returns the head node's data (n)
*
* @head: pointer to head node of a listint_t linked list
*
* Returns: the head node's data (n), otherwise 0 if linked list
* 		   if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	/** declarations */
	listint_t *temp;
	int n;

	temp = *head;
	if (*head == NULL)
		return (0);

	/** get head node's data before deleting */
	n = temp->n;

	/** point pointer to head node to the next node */
	*head = temp->next;
	free(temp);

	return (n);
}
