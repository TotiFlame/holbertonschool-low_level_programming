#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - exe a function
* @array: int pointer
* @size: size_t
* @action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
