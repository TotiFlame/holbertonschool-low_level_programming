#include "lists.h"
#include <stdlib.h>

/**
* add_node - adds a new node at
* the beginning of a list
* @head: head of the list
* @str: string
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;
	return (*head);
}
