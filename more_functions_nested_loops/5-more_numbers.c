#include "main.h"

/**
 * void more_numbers - will print the digits 0-14 10 times
 */

void more_numbers(void)

{
	int j;
	int i;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
		}
		_putchar('0' + i);
	}

	_putchar('\n');
}
