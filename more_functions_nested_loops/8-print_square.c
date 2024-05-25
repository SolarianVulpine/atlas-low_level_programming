#include "main.h"

/**
 * print_square - will print a square out of #
 *
 * Description: this code will use a series of loops influenced by
 * the variable 'size' to determine height and width of the square
 *
 * @size: will be provided to produce square dimensions
 *
 * Return: 0 on success
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
