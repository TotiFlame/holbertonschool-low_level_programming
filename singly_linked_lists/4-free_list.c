#include "lists.h"
/**
* free_list - frees list_t
* @head: pointer to head
*/
void free_list(list_t *head)
{
	list_t *r;

	if (head)
	{
		r = head;
		head = head->next;
		free(r);
	}
}
