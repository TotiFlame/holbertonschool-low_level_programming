#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @width: integer
* @height: integer
* Return: int
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int c, f;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
			return (NULL);
	}

	for (f = 0; f < height; f++)
	{
		for (c = 0; c < width; c++)
		{
			grid[f][c] = 0;
		}
	}
	return (grid);
}
