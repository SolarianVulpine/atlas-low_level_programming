#include "main.h"

/**
 * puts2 - Prints every other character of the string, starting with the first
 * @str: Pointer to the input string
 */

void puts2(char *str)
{
	unsigned int i = 0;
	unsigned int limit = 446;

	while (str[i] != '\0' && i < limit)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
