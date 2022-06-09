#include "main.h"

/**
* print_alphabet_x10 - print the alphabet 10 times with _putchar
*
* return: always o.
*
*/

void print_alphabet_x10(void)
{
	char i;
	int cont;

	for (cont = 0; cont <= 10; cont++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
