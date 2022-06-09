#include "main.h"

/**
* _abs - print the absolute value of an integer
*
* @n: character
*
* Return: Always 1
*
*/

int _abs(int n)
{
	int ab;

	if (n < 0)
	{
		ab = -1 * n;
		_putchar(ab);
	}
	else
	{
		_putchar(n);
	}

return (0);
}
