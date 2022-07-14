#include "lists.h"
/**
* add_node_end - add node at the end
* @head: pointer to pointer head
* @str: string
* Return: newnode
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *r = *head;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (r->next)
	{
		r = r->next;
	}
	r->next = newnode;
	return (newnode);
}
