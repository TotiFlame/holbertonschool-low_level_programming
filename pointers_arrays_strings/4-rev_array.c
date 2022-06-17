#include "main.h"
/**
* reverse_array - reverse an array
* @a: pointer int
* @n: int
*/

void reverse_array(int *a, int n)
{
	int cont;
	int cant = 0;
	int rev;

	while (a[cant])
		cant++;
	
	for (cont = 0, cant--; cont < cant; cont++, cant--)
	{
		rev = a[cont];
		a[cont] = a[cant];
		a[cant] = rev;
	}
}
