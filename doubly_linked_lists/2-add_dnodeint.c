#include "lists.h"
/**
* add_dnodeint - add node at the beginnig
* of a dlistint_t list
* @head: pointer to pointer head
* @n: const int
* Return: newnode
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL
	newnode->next = *head;

	*head = newnode;
	return (*head);
}