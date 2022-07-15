#include "lists.h"
/**
* pop_listint - delete the head node
* @head: pointer to pointer head
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int d = (*head)->n;
	if (!head)
		return (0);
	*head = (*head)->next;
	free(tmp);
	return (d);
}
