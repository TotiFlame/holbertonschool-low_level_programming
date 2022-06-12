#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
* @n: number
*
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j >= 1; j--)
			{
				if (j != 1)
				{
					_putchar(' ');
				}
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
