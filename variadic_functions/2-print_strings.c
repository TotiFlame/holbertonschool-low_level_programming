#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - prints strings
* @separator: string to be printed
* between the strings
* @n: numbers of strings passed
* to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
}
