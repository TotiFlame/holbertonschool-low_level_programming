#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: integer
* @argv: char pointer to an array
* Return: int
*/

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
