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
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!(*h)) /* if is an empty list */
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	if (idx == 0) /*if idx is the head */
	{
		newnode->prev = NULL;
		(*h)->prev = newnode;
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	else
	{
		while (ant && i != (idx - 1))
		{
			if (!ant->next)
				return (NULL);
			ant = ant->next;
			i++;
		}
		newnode->prev = ant;
		newnode->next = ant->next;
		newnode->next->prev = newnode;
		ant->next = newnode;
	}
	return (newnode);
}
