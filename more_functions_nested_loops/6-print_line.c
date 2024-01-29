#include "main.h"

/**
 * print_line - will print _ for length 'n'
 *
 * @n : will represent how long the line is
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
