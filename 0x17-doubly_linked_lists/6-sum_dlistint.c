#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
*
* @head: pointer to first node of list
*
* Return: sum of data, otherwise 0 (empty list)
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	/**check if list is empty */
	if (head == NULL)
		return (total);

	while (head->next != NULL)
	{
		total += head->n;
		head = head->next;
	}
	total += head->n; 	/* add data of last node to sum*/
	return (total);
}
