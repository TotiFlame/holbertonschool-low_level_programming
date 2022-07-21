#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node
* of a linked list
* @head: pointer to head
* @index: index
* Return: node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
