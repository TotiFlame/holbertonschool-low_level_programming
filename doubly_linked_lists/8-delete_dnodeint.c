#include "lists.h"
/**
* delete_dnodeint_at_index - delete a node at
* index of a double linked list
* @head: pointer to pointer to head
* @index: index
* Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *sig, *del;
	unsigned int i = 0;

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
	while (i != (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	del = tmp->next;
	sig = del->next;
	tmp->next = sig;
	sig->prev = tmp;
	free(del);
	return (1);
}
