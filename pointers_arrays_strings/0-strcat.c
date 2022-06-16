#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: pointer
* @src: pointer
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int dlen;
	int scon;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (src[scon] != '\0')
	{
		scon++;
		dest[dlen] = src[scon];
		dlen++;
	}

	return (dest);
}
