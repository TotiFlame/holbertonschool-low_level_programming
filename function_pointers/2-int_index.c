#include "function_pointers.h"

/**
* int_index - searches an integer
* @array: int pointer
* @size: int
* @cmp: int function
* Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
