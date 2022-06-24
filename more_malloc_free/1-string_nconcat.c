#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: char pointer
* @s2: char pointer
* @n: unsigned int
* Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght;
	char *conc;
	unsigned int i, j;

	if (s1 != NULL && s2 == NULL)
	{
		lenght = strlen(s1) + 1;
	}
	else if (s1 == NULL && s2 != NULL)
	{
		lenght = n + 1;
	}
	else if (s1 != NULL && s2 != NULL)
	{
		lenght = (strlen(s1) + n) + 1;
	}

	conc = malloc(lenght + 5* sizeof(char));
	if (conc == NULL)
		return ('\0');

	for (i = 0; s1 && s1[i]; i++)
		conc[i] = s1[i];

	if (n >= strlen(s2))
	{
		for (j = 0; s2 && s2[j]; j++, i++)
			conc[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			conc[i] = s2[j];
	}

	if (conc)
		return (conc);

	return ('\0');
}
