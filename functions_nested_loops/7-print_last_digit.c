#include "main.h"
#include <stdlib.h>

/**
* print_last_digit - print last digit of a number
*
* @n: character
*
* Return: value of the last digit
*/

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	_putchar(abs(ld) + '0');
	return (abs(ld));
	_putchar('\n');
}
