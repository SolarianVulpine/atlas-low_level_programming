#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - will return a pointer to the 2dimensional array while
 * also allocating memory space for whatever size that array ends up being
 *
 * @width: int for columns
 * @height: int for rows
 *
 * Return: Pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(width * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);
		}
	}

	return (grid);
}
