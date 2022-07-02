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
	va_list ptr;
	int i = 0;
	char *string;

	va_start(ptr, strlen(format));
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, char));
				break;
			
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			
			case 'f':
				printf("%f", va_arg(ptr, float));
				break;
			
			case 's':
			string = va_arg(ptr, char *);
				if (!string)
					printf("(nil)");
				printf("%s", va_arg(ptr, string));
				break;
			
			default:
				break;
		}
		i++;
	}
}
