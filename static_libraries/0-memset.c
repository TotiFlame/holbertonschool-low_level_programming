#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: char pointer
* @b: char
* @n: unsigned int
* Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		s[cont] = b;
	}
	return (s);
}
