#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t list
*
* @head: pointer to first node
* @index: index of nth node in list
*
* Return: nth node, otherwise NULL (does not exist)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	if (index > count)
		return (NULL);

	return (head);
}
