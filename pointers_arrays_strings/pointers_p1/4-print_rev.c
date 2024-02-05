#include "main.h"

/**
 * print_rev - will print a string in reverse with a new line
 * @s: Pointer to input string
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
