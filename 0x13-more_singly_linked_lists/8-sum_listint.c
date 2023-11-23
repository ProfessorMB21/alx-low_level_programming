#include "lists.h"

/**
* sum_listint - Sums all the data (n) of a listint_t linked list
*
* @head: pointer to first node
*
* Return: sum, otherwise 0 (if list is empty)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);

	*node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
