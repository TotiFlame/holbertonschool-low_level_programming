#include "main.h"

/**
* string_toupper - change lowercase letters to uppercase
* @s: pointer char
* Return: char
*
*/

char *string_toupper(char *s)
{
	int upp;

	for (upp = 0; s[upp]; upp++)
	{
		if (s[upp] >= 97 && s[upp] <= 122)
			s[upp] -= 32;
	}
	return (s);
}
