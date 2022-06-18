#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: char pointer 
* @accept: char pointer
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int scont;
	int acont;
	unsigned int res = 0;

	for (scont = 0; scont <= 5; scont++)
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
