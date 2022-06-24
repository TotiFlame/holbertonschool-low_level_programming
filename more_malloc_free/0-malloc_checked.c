#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: unsigned int
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);
	if (r == NULL)
		return (NULL);

	return (r);
}
