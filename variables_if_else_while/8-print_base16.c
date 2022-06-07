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
	char num;
	char let;

	for (num = '0' ; num <= '9' ; num++)
	{
	putchar(num);
	}
	for (let = 'a' ; let <= 'f' ; let++)
	{
	putchar(let);
	}
	putchar('\n');

	return (0);
}
