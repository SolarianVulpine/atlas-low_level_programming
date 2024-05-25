#include "main.h"

/**
 * print_diagonal - this is the entry point of the program
 *
 * Description: should print a diagonal line with
 * n determining the length
 *
 * @n: the provided int
 *
 * Return: 0 upon success
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
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
