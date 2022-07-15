#include "lists.h"
/**
* pop_listint - delete the head node
* @head: pointer to pointer head
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d = 0;

	if (!(*head))
	{
		return (0);
	}
	tmp = *head;
	d = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (d);
}
