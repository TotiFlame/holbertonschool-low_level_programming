#include "lists.h"
/**
* dlistint_len - return number of elements
* @h: dlistint_t pointer
* Return: count
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
