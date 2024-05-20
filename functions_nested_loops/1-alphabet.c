#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - the entry point to my code
 *
 * Description: this code prints the alphabet using string iteration
 *
 * Return: Always 0 (success)
 */

int print_alphabet(void)
{
	int i;

	i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
		if (i == 122)
		_putchar('\n');
	}

	return (0);
}
