#include "lists.h"
/**
* free_listint - frees list
* @head: pointer to head
*/
void free_listint(listint_t *head)
{
	listint_t r;

	while (head)
	{
		r = head;
		head = head->next;
		free(r);
	}
}
