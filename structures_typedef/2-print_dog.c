#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints struct
* @d: struct dog
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	else if (d->age == .0f)
		printf("Age: 0.000000\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
