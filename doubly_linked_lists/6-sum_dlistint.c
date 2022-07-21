#include "lists.h"
/**
* sum_dlistint - sum all the data of
* a linked list
* @head: pointer to head
* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
