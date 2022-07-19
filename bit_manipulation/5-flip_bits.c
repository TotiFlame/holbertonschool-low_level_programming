#include "main.h"
/**
* flip_bits - returns the number of bits you 
* would need to flip to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;

	while (n >= 1 || m >= 1)
	{
		if ((n & 1) != (m & 1))
		{
			cont++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (cont);
}
