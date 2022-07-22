#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node
* at a given position
* @h: pointer to pointer to head
* @idx: index
* @n: int
* Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ant = *h, *sig;
	dlistint_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*h) || idx == 0)
		return (add_dnodeint(h, n));
	while (ant && i != (idx - 1))
	{
		ant = ant->next;
		i++;
	}
	if (!ant->next)
		return (add_dnodeint_end(h, n));
	sig = ant->next;
	newnode->prev = ant;
	newnode->next = sig;
	ant->next = newnode;
	sig->prev = newnode;
	return (newnode);
}
