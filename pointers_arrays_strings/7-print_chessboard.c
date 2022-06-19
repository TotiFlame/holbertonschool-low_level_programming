#include "main.h"
#include <stdio.h>

/**
* print_chessboard - prints the chessboard
* @a: char pointer
*
*/

void print_chessboard(char (*a)[8])
{
	int s = 0;
	int f = 0;

	for (f = 0; f < 8; f++)
	{
		for (s = 0; s < 8; s++)
		{
			printf("%c", a[f][s]);
		}
		printf("\n");
	}
}
