#include "main.h"

/**
*
*
*
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int scont;
	int acont;
	int cant;
	unsigned int res = 0;

	for (cant = 0; accept[cant] != '\0'; cant++)
	{
	}

	for (scont = 0; scont < cant; scont++)
	{
		for (acont = 0; accept[acont]; acont++)
		{
			if (s[scont] == accept [acont])
			{
				res++;
			}
		}
	}
	return (res);
}
