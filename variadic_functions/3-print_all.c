#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, is_format;
	char *string;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		is_format = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				is_format = 0;
				break;
		}
		if (format[i + 1] && is_format)
			printf(", ");
		i++;
	}
	printf("\n");
}
