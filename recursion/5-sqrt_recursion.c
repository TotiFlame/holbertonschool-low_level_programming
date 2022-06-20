#include "main.h"

/**
* iterador - returns the natural square root of a number
* _sqrt_recursion - natural square root of a number
* @n: integer
* @i: integer
* Return: int
*/

int iterador(int n, int i)
{
	int sqr = 0;

	sqr = i * i;

	if (i <= n)
	{
		if (sqr == n)
		{
			return (i);
		}
		else
		{
			return (iterador(n, i + 1));
		}
	}
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	return (iterador(n, 1));
}
