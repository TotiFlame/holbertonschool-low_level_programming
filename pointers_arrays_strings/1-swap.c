#include "main.h"

/**
* swap_int - swap values of two integers
*
* @a: first number
* @b: second number
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int s;

	s = a;
	a = b;
	b = s;
}
