#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array
* of integers using the binary search algorithm
*
* @array: is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: -1 if is not present or if the array is NULL
* or the first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int i, div = 0, min = 0, max;

	if (!array)
		return (-1);
	max = size - 1;
	while (min <= max)
	{
		div = (min + max) / 2;
		i = min;
		printf("Searching in array:");
		while (i <= max)
		{
			if (i == max)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
			i++;
		}
		if (value > array[div])
			min = div + 1;
		if (value < array[div])
			max = div - 1;
		if (value == array[div])
			return (div);
	}
	return (-1);

