#include "main.h"

/**
 * print_diagonal - will print '\' as many times as n
 *
 * @n : number input or line length
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		_putchar('\\');
		_putchar('\n');

		for (i = 1; i <= (n - 1); i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
                _putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
