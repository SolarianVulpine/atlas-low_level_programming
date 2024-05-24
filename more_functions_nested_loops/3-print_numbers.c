#include "main.h"

/**
 * print_numbers - the entry point of my code
 *
 * Description: will print the digits 0-9 and a \n using putchar twice
 *
 * Return: will return 0 on success
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
