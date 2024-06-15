#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - a function that frees the memory allocated by 3-malloc_grid
*
* @grid: the array in question
* @height: int height is also here
*
* Return: void
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
