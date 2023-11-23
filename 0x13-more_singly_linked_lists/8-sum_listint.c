#include "lists.h"

/**
* sum_listint - Sums all the data (n) of a listint_t linked list
*
* @head: pointer to first 
*
* Return: sum, otherwise 0 (if list is empty)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
