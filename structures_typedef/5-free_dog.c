#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees dogs
* @d: dog_t
* Return: something
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
	else
		return;
}
