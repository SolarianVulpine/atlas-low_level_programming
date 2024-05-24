#include "main.h"

/**
 * more_numbers - the entry point of my code
 *
14 * Description: will print the digits 0-9 and a \n 
using putchar thrice
 *
 * Return: will return 0 on success
 */

void print_numbers(void)
{
	int i;
	int j = 0;

	while (j < 11)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}

}
