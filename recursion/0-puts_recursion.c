#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line
* @s: char pointer
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\n');
}
