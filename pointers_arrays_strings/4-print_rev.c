#include "main.h"

/**
* print_rev - prints a string reverse
* @s: string
*
* Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if (*(s + i) == '\0')
	{
		for (; i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	}

	_putchar('\n');
}
