#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
    int i, j, k;
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
        gird[i] = (int *)malloc(height * sizeof(int));
        
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
