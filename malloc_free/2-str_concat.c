#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - concatenates two strings
* @s1: char pointer
* @s2: char pointer
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int lenght;
	int res, i;

	if (s1 != NULL && s2 == NULL)
	{
		lenght = strlen(s1) + 1;
	}
	else if (s1 == NULL && s2 != NULL)
	{
		lenght = strlen(s2) + 1;
	}
	else if (s1 != NULL && s2 != NULL)
	{
		lenght = strlen(s1);
		lenght += strlen(s2) + 1;
	}

	conc = malloc(lenght * sizeof(char));
	if (conc == NULL)
		return ('\0');

	for (res = 0; s1[res] ; res++)
		conc[res] = s1[res];
	
	for (i = 0; s2[i]; res++, i++)
		conc[res] = s2[i];
	
	if (conc)
	{
		return (conc);
	}
	else
	{
		return (NULL);
	}
}
