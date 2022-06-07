#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alp;
	char alpu;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
	putchar(alp);
	}
	for (alpu = 'A' ; alpu <= 'Z' ; alpu++)
	{
	putchar(alpu);
	}
	putchar('\n');

	return (0);
}
