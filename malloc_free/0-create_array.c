#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: unsigned int
* @c: char
* Return: char
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int cont;

	if (size == 0)
		return (0);

	str = malloc(size * sizeof(c));
	for (cont = 0; cont < size; cont++)
	{
		str[cont] = c;
	}
	return (str);
}
