#include "lists.h"
/**
* free_listint2 - frees a list
*  @head: pointer to pointer head
*/
void free_listint2(listint_t **head)
{
	listint_t *r;

	while (*head)
	{
		r = *head;
		*head = *head->next;
		free(r);
	}
}
