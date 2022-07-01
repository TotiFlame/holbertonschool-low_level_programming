#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: string between numbers
* @n: number of arg
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != (n - 1))
			if (separator)
			printf("%s", separator);
	}
	printf("\n");
}
