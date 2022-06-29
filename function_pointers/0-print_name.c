#include "function_pointers.h"
#include <stddef.h>
void print_name(char *name, void (*f)(char *))
{
	if (name[0] == '\0' || f == NULL)
		return;
	f(name);
}
