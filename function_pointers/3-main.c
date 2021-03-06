#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - main
* @argc: int
* @argv: char pointer
* Return: int
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int, int);
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);
	if (strlen(argv[2]) != 1 || f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0) && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (*f)(num1, num2);
	printf("%d\n", res);
	return (0);
}
