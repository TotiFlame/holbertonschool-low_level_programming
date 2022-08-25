#include "search_algos.h"
/**
* linear_search - searches for a value in
* a array of integers using linear search algorithm
*
* @array: is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
*
* Return: -1 if is not present or if the array is NULL
* or the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
