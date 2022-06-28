#include "dog.h"
/**
* init_dog - intialize a variable of type strdog
* @d: structure dog
* @name: char
* @age: float
* @owner: char
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
