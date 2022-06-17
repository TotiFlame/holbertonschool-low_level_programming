#include "main.h"
/**
* reverse_array - reverse an array
* @a: pointer int
* @n: int
*/

void reverse_array(int *a, int n)
{
	int cont;
	int rev;

	for (cont = 0, n--; cont < n; cont++, n--)
	{
		rev = a[cont];
		a[cont] = a[n];
		a[n] = rev;
	}
}
