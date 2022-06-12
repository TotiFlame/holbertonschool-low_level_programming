#include "main.h"

/**
* print_triangle - draws a square in the terminal
* @size: number
*
* Return: void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				if (j == size)
				{
					for (n = i; n >= 1; n--)
					{
						_putchar('#');
					}
				}
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
