#include "main.h"

/**
* _strstr - locate a substring
* @haystack: char pointer
* @needle: char pointer
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int cantn = 0, int canth = 0, int hcont = 0, int ncont = 0, int res = 0;

	while (needle[cantn] != '\0')
	{
		cantn++;
	}
	while (haystack[canth] != '\0')
	{
		canth++;
	}
	while (haystack[hcont])
	{
		if (haystack[hcont] == needle[ncont])
		{
			while (res <= cantn)
			{
				if (haystack[hcont] == needle[ncont])
				{
					hcont++;
					ncont++;
					res++;
				}
				else
				{
					hcont++;
					ncont = 0;
					res = 0;
				}
				if (res == cantn)
				{
					return (&haystack[hcont - res]);
				}
			}
		}
		hcont++;
	}
	return ('\0');
}
