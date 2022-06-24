#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocates memory for an array
* @nmemb: unsigned int
* @size: unsigned int
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
		if (arr == NULL)
			return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = 0;

	return (arr);

}
