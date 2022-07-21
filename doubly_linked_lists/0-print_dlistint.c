#include "lists.h"
/**
* print_dlistint - print double list int
* @h: dlistint pointer
* Return: count
*/
size_t print_dlistint(const dlistint_t *h)
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
