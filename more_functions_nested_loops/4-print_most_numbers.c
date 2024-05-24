#include "main.h"

/**
 * print_most_numbers - the entry point of my code
 *
 * Description: will print the digits 0-9 and a \n using putchar twice
 * skips 2 and 4
 *
 * Return: will return 0 on success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');

}
