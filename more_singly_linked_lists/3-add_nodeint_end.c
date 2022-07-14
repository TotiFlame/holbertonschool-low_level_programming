#include "lists.h"
/**
* add_nodeint - add a node at the
* end of a listint_t
* @head: pointer to pointer head
* @n: const int
* Return: newnode
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *r = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (r->next)
		r = r->next;
	r->next = newnode;
	return (newnode);
}
