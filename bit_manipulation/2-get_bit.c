#include "main.h"
#include <stdio.h>
/**
* get_bit - returns the value of
* a bit at a given index
* @n: number
* @index: index
* Return: value of the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin[64];
	int i = 0;
	int bit = 0;

	while (n)
	{
		bit = (n & 1);
		bin[i] = bit;
		n >>= 1;
		i++;
	}
	return(bit[index]);
}
