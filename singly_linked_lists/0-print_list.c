#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all elements
* of a list
* @h: const list_t pointer
* Return: size_t
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
