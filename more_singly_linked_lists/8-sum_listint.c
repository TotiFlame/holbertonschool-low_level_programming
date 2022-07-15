#include "lists.h"
/**
* sum_listint - sum all data
* of a listint
* @head: pointer to head
* Return: int
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
