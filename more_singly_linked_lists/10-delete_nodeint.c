#include "lists.h"
/**
*
*
*
*
*
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *del;
	unsigned int r = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp || r != (index - 1))
	{
		tmp = tmp->next;
		r++;
	}
	r = 0;
	del = *head;
	while (del || r != index)
	{
		del = del->next;
		r++;
	}
	tmp->next = del->next;
	free(del);
	return (1);
}
