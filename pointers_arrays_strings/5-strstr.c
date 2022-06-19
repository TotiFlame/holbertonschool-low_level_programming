#include "main.h"

/**
* _strstr - locate a substring
* @haystack: char pointer
* @needle: char pointer
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int cantn = 0;
	int hcont = 0;
	int ncont = 0;
	int res = 1;
	int contr = 0;

	while (needle[cantn] != '\0')
	{
		cantn++;
	}

	while (haystack[hcont])
	{
		if (haystack[hcont] == needle[ncont])
		{
			contr = 1;
			while (contr <= cantn - 1)
			{
				if (haystack[hcont] == needle[ncont])
				{
					hcont++;
					ncont++;
					contr++;
					res++;
				}
			}
		}
		hcont++;
	}
	if (res == cantn)
	{
		return (&needle[0]);
	}
	return ('\0');
}
