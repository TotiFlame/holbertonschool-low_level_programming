#include "main.h"
#include <stdio.h>

/**
* puts_half - print half of a string
* @str: char pointer
*
*/

void puts_half(char *str)
{
	int i;
	int a;

	for (i = 0; str[i] != '\0'; i++)

	printf("%d", i);

	a = (i - 1) / 2;

	if (a % 2 == 0)
	{
		for (a++; str[a] != '\0'; a++)
			_putchar(str[a]);
	}
	else
	{
		for (a--; str[a] != '\0'; a++)
			_putchar(str[a]);

	}
	_putchar('\n');
}
