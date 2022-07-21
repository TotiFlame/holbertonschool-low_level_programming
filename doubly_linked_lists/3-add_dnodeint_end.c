#include "lists.h"
/**
* add_dnodeint_end - adds a new node at
* the end of a list
* @head: pointer to pointer to head
* @n: const int
* Return: newnode
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *r = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
		while (r->next)
			r = r->next;
		newnode->prev = r;
		r->next = newnode;
	}
	return (newnode);
}
