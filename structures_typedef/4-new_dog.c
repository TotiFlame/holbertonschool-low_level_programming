#include "dog.h"
#include <stdio.h>
/**
* new_dog - create a new dog
* @name: char pointer
* @age: float
* @owner: char pointer
* Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *travis;
	int namelngt = strlen(name);
	int ownerlngt = strlen(owner);
	int i;

	travis = malloc(sizeof(dog_t));
	if (travis == NULL)
		free(travis);
		return (NULL);

	travis->name = malloc(namelngt + 1);
	if (travis->name ==  NULL)
		free(travis->name);
		free(travis);
		return (NULL)

	travis->owner = malloc(ownerlngt + 1);
	if (travis->owner == NULL)
		free(travis->owner);
		free(travis->name);
		free(travis);
		return (NULL);

	for (i = 0; i < namelngt; i++)
		travis->name[i] = name[i];
	travis->name[i] = NULL;

	for (i = 0; i < ownerlngt; i++)
		travis->owner[i] = owner[i];
	travis->owner[i] = NULL;

	travis->age = age;
	retrun (travis);
}
