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
	int lenght = 0;

	if (min > max)
		return (NULL);
	lenght = max - min + 1;

	arr = malloc(lenght * sizeof(int));
	if (arr == NULL)
		return (NULL);


	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
