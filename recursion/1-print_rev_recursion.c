#include "main.h"

/**
* _print_rev_recursion - pritns rev
* @s: char pointer
*/

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');

	if (*s != '\0')
	{
		s++;
		if (*s != '\0')
		{
			_print_rev_recursion(s);
			_putchar(*s);
		}
		_putchar('\n');
	}
}
