#include "lists.h"
/**
* listint_len - number of elements
* @h: listint_t pointer
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
