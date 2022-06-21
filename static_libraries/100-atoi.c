#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%c", *s);
	}

	return (i);
}
