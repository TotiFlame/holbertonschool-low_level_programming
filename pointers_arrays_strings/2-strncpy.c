#include "main.h"

/**
* _strncpy - 
*
*
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		if (src[0] == '\0')
		{
			dest[cont] = src[cont];
		}
	}
	return (dest);
}
