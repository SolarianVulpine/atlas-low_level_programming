#include "main.h"

/**
 * print_square - will print the # symbol to create a square
 *
 * @n : length or amount of #
 */

void print_square(int n)

{
	int i;
	int j;

	if (n > 0)
	{
		for(i = 1; i <= n; i++)
		{
			for(j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	if (n <= 0)
		_putchar('\n');
}
