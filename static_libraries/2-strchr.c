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

	for (loc = 0; s[loc]; loc++)
	{
		if (s[loc] == c)
		{
			return (&s[loc]);
		}
	}
	if (c == '\0' && s[loc] == '\0')
	{
		return (&s[loc]);
	}
	return ('\0');
}
