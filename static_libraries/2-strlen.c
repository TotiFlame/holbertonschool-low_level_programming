#include "main.h"

/**
* _strlen - lenght of a string
* @s: char
*
* Return: lenght of a string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
