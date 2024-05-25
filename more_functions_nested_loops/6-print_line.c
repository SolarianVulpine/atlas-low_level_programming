#include "main.h"

/**
 * print_line - the entry point of the program
 *
 * Description: this code will print a series of underscores
 * for as many spaces as the variable dictates
 *
 * @n: this is the determining variable
 *
 * Return: will return 0 on success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}
