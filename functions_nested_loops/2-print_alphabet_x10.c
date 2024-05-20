#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point for this function
 *
 * Description: Should print alphabet ten times
 *
 * Return: Always 0 (success)
 */

int print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
			if (i == 122)
			{
				_putchar('\n');
			}
		}
	}

	return (0);
}
