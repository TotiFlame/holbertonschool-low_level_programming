#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sums of the two diagonals
* @a: int pointer
* @size: int
*/

void print_diagsums(int *a, int size)
{
	int cont;
	int sum = 0;
	int sum2 = 0;

	for (cont = 0; cont < (size * size);)
	{
		sum += a[cont];
		cont = cont + size + 1;
	}
	for (cont = size - 1; cont < (size * size - 1);)
	{
		sum2 += a[cont];
		cont = cont + size - 1;
	}

	printf("%d, %d\n", sum, sum2);
}
