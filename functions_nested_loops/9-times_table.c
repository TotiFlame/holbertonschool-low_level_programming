#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: 1
*/

void times_table(void)
{
	int i;
	int j;
	int r = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
		}
		_putchar('\n');
	}

}
