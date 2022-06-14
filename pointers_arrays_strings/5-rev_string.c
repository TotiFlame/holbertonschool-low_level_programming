#include "main.h"

/**
* rev_string - prints a string and reverse it
* @s: string
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0;
	char *c = s;
	int a;
	char in;

	while (*(c + i) != '\0')
	{
		i++;
	}
	
	for (a = 0; *(s + a) <= *(c + i); a++)
		{
			for (i = i - 1; i >= 0; i--)
				{
					in = *(s + a);
					*(s + a) = *(c + i);
					*(c + i) = in;
				}

		}
}
