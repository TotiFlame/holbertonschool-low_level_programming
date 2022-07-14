#include "lists.h"
/**
* add_nodeint - add node at
* the beginning of a list
* @head: pointer to pointer head
* @n: int
* Return: head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (*head);
}
