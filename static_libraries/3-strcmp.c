#include "main.h"

/**
* _strcmp - compare two strings
* @s1: char
* @s2: char
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int com;
	int res = 0;

	com = 0;
	while (s1[com] || s2[com])
	{
		if (s1[com] != s2[com])
		{
			res = s1[com] - s2[com];
			break;
		}
		com++;
	}

	return (res);
}
