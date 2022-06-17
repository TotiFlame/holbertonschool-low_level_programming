#include "main.h"

/**
* _strncpy - copies a string
* @dest: pointer
* @src: pointer
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; cont < n && dest[cont] && src[cont]; cont++)
	{
		dest[cont] = src[cont];
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
