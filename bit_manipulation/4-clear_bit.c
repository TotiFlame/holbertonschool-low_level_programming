#include "main.h"
#include <stdio.h>
/**
* clear_bit - sets the value of a bit
* to 0 at a given index
* @n: decimal number
* @index: index
* Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int res = 1;

	if (index > 64)
		return (-1);
	if (((*n >> index) & 1) == 1)
	{
		for (i = 0; i < index; i++)
		{
			res = (res * 2);
		}
		*n = *n - res;
	}
	return (1);
}
