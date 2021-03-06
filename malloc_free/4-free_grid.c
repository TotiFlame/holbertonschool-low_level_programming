#include "main.h"
#include <stdlib.h>
/**
* free_grid -  frees a 2 dimensional grid
* @grid: int pointer to pointer
* @height: int
*/

void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
