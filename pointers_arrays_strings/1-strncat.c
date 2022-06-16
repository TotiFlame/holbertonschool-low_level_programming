#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: pointer
* @src: pointer
* @n: integer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen;
	int scon;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	{
	}

	for (scon = 0; scon < n; scon++)
	{
		if(src[0] != '\0')
		{
			dest[dlen] = src[scon];
			dlen++;
		}
	}

	return (dest);
}
