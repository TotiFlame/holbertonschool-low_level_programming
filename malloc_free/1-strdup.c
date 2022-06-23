#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a copy of a string
* @str: char pointer
* Return: char
*/

char *_strdup(char *str)
{
	int cont = 0;
	char *dup;
	int it;

	if (str == NULL)
		return ('\0');

	while (str[cont])
		cont++;

	dup = malloc(cont + 1 * sizeof(char));
	if (dup == NULL)
		return ('\0');

	for (it = 0; it <= cont; it++)
	{
		dup[it] = str[it];
	}
	return (dup);
}
