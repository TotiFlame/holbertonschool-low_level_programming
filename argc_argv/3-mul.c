#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: integer
* @argv: char pointer to an array
* Return: int
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", (num1 * num2));

	}
	else if (argc < 3 || argc > 3)
		printf("Error\n");

	return (0);
}
