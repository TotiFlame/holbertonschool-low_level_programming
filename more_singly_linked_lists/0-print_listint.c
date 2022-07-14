#include "lists.h"
#include <stdio.h>
/**
* print_listint - print list
* @h: listint_t pointer
* Return: count
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
