#include "main.h"

/**
 * print_triangle - this is the entry point of the program
 *
 * Description: should print a triangle where 'size' determines
 * the length
 *
 * @size: the provided int
 *
 * Return: 0 upon success
 */

void print_triangle(int size)
{
	int i;
	int j;

	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}
