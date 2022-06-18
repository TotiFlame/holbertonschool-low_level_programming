#include "main.h"

/**
* _strpbk - searches a string for any of a set of bytes
* @s: char pointer
* @accept: char pointer
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int scont;
	int acont;

	for (scon = 0; s[scon]; scon++)
	{
		for (acont = 0; accept[acont]; acont++)
		{
			if (s[scont] == accept[acont])
				return (&s[scont])
		}
	}
	return ('\0');
}
