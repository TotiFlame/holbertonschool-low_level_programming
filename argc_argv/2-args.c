#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: integer
* @argv: char pointer to an array
* Return: int
*/

int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
		printf("%s\n", argv[cont]);

	return (0);
}
