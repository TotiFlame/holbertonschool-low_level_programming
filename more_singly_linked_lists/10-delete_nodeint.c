#include "lists.h"
/**
* delete_nodeint_at_index - delete node
* @head: pointer to pointer head
* @index: index
* Return: int
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
		if (!del->next)
			return (-1);
		del = del->next;
		r++;
	}
	while (tmp || i != (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = del->next;
	free(del);
	return (1);
}
