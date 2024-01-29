#include "main.h"
#include <stdio.h>

/**
 * print_triangle - will print # in a triangle shape based on size provided
 *
 * @n : is the size of the triangle
 *
 * i : will be rows
 * j : will be collumns
 *
 * return : nothing
 */

void print_triangle(int n)
{
	int i;
	int j;
	
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j <= (n - i))
					printf(" ");
				else
					printf("#");
			}
			printf("\n");
		}
		if (n <= 0)
			printf("\n");
	}
}
