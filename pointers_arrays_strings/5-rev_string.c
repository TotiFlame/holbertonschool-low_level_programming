#include "main.h"

/**
* rev_string - prints a string and reverse it
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, a;
	char in;

	while (s[i])
		i++;

	for (a = 0, i--; a < i; a++, i--)
	{
		in = s[a];
		s[a] = s[i];
		s[i] = in;
	}
}
