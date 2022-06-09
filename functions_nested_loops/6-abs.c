#include "main.h"

/**
*
* _abs - print the absolute value of an integer
* @n: character
* Return: Always 1
*
*/

int _abs(int n)
{
	if (n < 0)
	{
		_putchar(-1*n);
	}
	else
	{
		_putchar(n);
	}

return (0);
}
