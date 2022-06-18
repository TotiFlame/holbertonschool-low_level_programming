#include "main.h"

/**
* _strchr - locates a character in a string
* @s: char pointer
* @c: char
* Return: char
*/

char *_strchr(char *s, char c)
{
	int loc;

	if (c == '\0')
	{
		return (' ');
	}
	for (loc = 0; s[loc]; loc++)
	{
		if (s[loc] == c)
		{
			return (&s[loc]);
		}
	}
	return ('\0');
}
