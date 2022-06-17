#include "main.h"

/**
* leet - encodes a string into 1337
* @epslc: char pointer
* Return: char
*/

char *leet(char *str)
{
	int cont;

	for (cont = 0; str[cont]; cont ++)
	{
		if (str[cont] == 97 || str[cont] == 65)
		{
			str[cont] = 52;
		}
		else if (str[cont] == 101 || str[cont] == 69)
		{
			str[cont] = 51;
		}
	}
}
