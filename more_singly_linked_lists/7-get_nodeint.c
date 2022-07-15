#include "lists.h"
/**
* get_nodeint_at_index - return the
* nth node of a list
* @head: pointer to head
* @index: index of node
* Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);
	while (n != index)
	{
		head = head->next;
		n++;
	}
	return (head);
}
