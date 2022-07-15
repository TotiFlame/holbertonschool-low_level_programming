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
	unsigned int r = 0, i = 0;

	if (!(*head))
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	del = *head;
	while (del || r != index)
	{
		del = del->next;
		r++;
	}
	while (tmp || i != (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if (del->next == NULL)
	{
		free(del);
		tmp->next = NULL;
	}	
	return (1);
}