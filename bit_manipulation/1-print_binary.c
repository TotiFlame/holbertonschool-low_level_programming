#include "main.h"
/**
* print_binary - binary to decimal
* @n: unsigned long int 
*/
void print_binary(unsigned long int n)
{
	unsigned int bin = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bin = (n & 1) + '0';
	print_binary(n >>= 1);
	_putchar(bin);
}
