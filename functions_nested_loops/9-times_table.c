#include <stdio.h>
#include "main.h"

/**
 * times_table - the main entry point of my code
 *
 * Description: should print a nine by nine times table
 *
 * Return: 0 right? for void successes
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	/*
	 * where k is the result of i times j
	 */

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (k < 10)
					_putchar(' ');
				else
					_putchar((k / 10) + '0');
					/*
					 * I think this + 0 thing turns the number into a ascii somehow
					 */
				_putchar((k % 10) + '0');
					/*for the ones digit*/
			}
		}
			_putchar('\n');
	}
}
