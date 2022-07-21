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
	dlistint_t *ant = *h;
	dlistint_t *newnode;
	int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*h))
		return (NULL);
	while (ant && i != (idx - 1))
	{
		if (!ant->next)
			return (NULL);
		ant = ant->next;
		i++;
	}
	newnode->prev = ant;
	newnode->next = ant->next;
	ant->next = newnode;
	return (newnode);
}
