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

	if (n > strlen(s2))
		n = strlen(s2);
	if (s1 != NULL && s2 == NULL)
		lenght = strlen(s1);
	else if (s1 == NULL && s2 != NULL)
		lenght = n;
	else if (s1 != NULL && s2 != NULL)
		lenght = (strlen(s1) + n);

	conc = malloc(lenght * sizeof(char) + 1);
	if (conc == NULL)
		return ('\0');

	for (i = 0; s1 && s1[i]; i++)
		conc[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		conc[i] = s2[j];

	if (conc)
		return (conc);

	return ('\0');
}
