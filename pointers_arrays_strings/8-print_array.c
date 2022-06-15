#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: integer pointer
* @n: integer
*
*/

void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		
		if (cont == n - 1)
		{
			printf("%d", a[cont]);
		}
		else if (cont != n)
		{
			printf("%d, ", a[cont]);
		}		
	}

	printf("\n");
}
