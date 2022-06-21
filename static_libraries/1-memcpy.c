#include "main.h"

/**
* _memcpy - copies memory area
* @dest: char pointer
* @src: char pointer
* @n: unsigned int
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		dest[cont] = src[cont];
	}
	return (dest);
}
