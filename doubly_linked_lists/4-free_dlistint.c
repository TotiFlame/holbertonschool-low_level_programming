#include "lists.h"
/**
* free_dlistint - frees a dlistint_t
* @head: pointer to head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *r;

	while (head)
	{
		r = head;
		head = head->next;
		free(r);
	}
}
