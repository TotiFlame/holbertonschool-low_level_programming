#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print all numbers from n to 98
* @n: number
*
* Return: void
*/

void print_to_98(int n)
{
	int f;

	if (n < 98)
	{
		for (f = n; f <= 98; f++)
		{
			if (f != 98)
			{
				printf("%d, ", f);
			}
			else
			{
				printf("%d", f);
				printf("\n");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (f = n; f >= 98; f--)
			if (f != 98)
			{
				printf("%d, ", f);
			}
			else
			{
			printf("%d", f);
			printf("\n");
			}
	}
}
