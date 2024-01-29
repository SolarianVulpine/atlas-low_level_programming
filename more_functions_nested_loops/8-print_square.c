#include "main.h"

/**
 * print_square - will print the # symbol to create a square
 *
 * @n : length or amount of #
 *
 * @i : iterate through rows
 *
 * @j : iterate over columns
 */

void print_square(int n)

{
	int i;
	int j;

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
