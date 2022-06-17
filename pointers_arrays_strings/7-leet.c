#include "main.h"

/**
* leet - encodes a string into 1337
* @str: char pointer
* Return: char
*/

char *leet(char *str)
{
	int cont;
	int scont;
	int let[] = "aAeEoOtTlL";
	int num[] = 4433007711;

	for (cont = 0; str[cont]; cont++)
	{
		for (scont = 0; let[scont]; scont++)
		{
			if (str[cont] == let[scont])
			{
				str[cont] = num[scont];
			}
		}
	}
	return (str);
}
