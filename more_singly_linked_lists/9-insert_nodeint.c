#include "lists.h"
/**
* insert_nodeint_at_index - insert node at
* index of a listint
* @head: pointer to head
* @idx: index
* @n: number
* Return: newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ant;
	listint_t *newnode;
	unsigned int r = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		ant = *head;
		while (ant && r != (idx - 1))
		{
			if (!ant || !ant->next)
				return (NULL);
			ant = ant->next;
			r++;
		}
		newnode->next = ant->next;
		ant->next = newnode;
	}
	return (newnode);
}
