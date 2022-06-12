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
				_putchar(' ');
			}
		_putchar('#');
		_putchar('\n');
		}
	}
}
