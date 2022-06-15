#include "main.h"

/**
* _strcpy - copies the pointed to by src to the buffer pointed to by dest
* @dest: char pointer
* @src: char pointer
*
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0, j = 0; src[i] != '\0'; i++, j++)
		dest[j] = src[i];

	return (dest);
}
