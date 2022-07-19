#include "main.h"
/**
* set_bit - sets the value of a bit
* to 1 at a given index
* @n: decimal number
* @index: index
* Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;
	int sum = 1;

	if (index > 64)
		return (-1);
	if (((*n >> index) & 1) == 0)
	{
		for (i = 0; i < index; i++)
		{
			sum = (sum * 2);
		}
		*n = *n + sum;
		return (1);
	}
	return (-1);
}
