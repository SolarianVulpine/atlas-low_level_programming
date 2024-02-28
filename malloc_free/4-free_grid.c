#include "main.h"
#include <stdlib.h>

/**
 * free_grid - aims to free memory from alloc_grid func
 *
 * @grid: dynamically allocated 2D array to free
 * @height: number of rows in grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
