#include "main.h"
#include <stdlib.h>

/**
* array_range -creates an array of integers
* @min: int
* @max: int
* Return: int pointer
*/

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(max * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		arr[i] = i;
	return (arr);
}
