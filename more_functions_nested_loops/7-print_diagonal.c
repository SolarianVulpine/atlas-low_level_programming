#include "main.h"

/**
 * print_diagonal - will print '\' as many times as n
 *
 * @n : number input or line length
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
