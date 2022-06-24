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

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n > strlen(s2))
		n = strlen(s2);

	lenght = strlen(s1) + n;
	conc = malloc(lenght * sizeof(char) + 6);
	if (conc == NULL)
		return ('\0');

	for (i = 0; s1 && s1[i]; i++)
		conc[i] = s1[i];

	for (j = 0; s2 && j < n; j++, i++)
		conc[i] = s2[j];

	conc[i] = '\0';
	if (conc)
		return (conc);

	return ('\0');
}
