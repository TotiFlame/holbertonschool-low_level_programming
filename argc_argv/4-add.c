#include <stdio.h>
#include <stdlib.h>

/**
* verify - verify if string is a number
* @r: char
* Return: int
*/

int verify(char *r)
{
	int rec;

	for (rec = 0; r[rec] != '\0'; rec++)
	{
		if (r[rec] < 48 || r[rec] > 57)
		{
			return (0);
		}
	}
	return (1);
}

/**
* main - add all positive numbers
* @argc: integer
* @argv: char pointer to an array
* Return: int
*/

int main(int argc, char *argv[])
{
	int cont;
	int sum = 0;

	for (cont = 1; cont < argc; cont++)
	{
		if (verify(argv[cont]))
		{
			sum += atoi(argv[cont]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
