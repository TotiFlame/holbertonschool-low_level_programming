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
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
