#include "main.h"

/**
 * puts_half - prints last half og string
 *
 * Description:
 *
 * @str: the provided string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int len;
	int i = 0;

	for (len = 0; str[len] != '\0';)
	{
		len++;
	}

	if (len % 2 != 0)
	{
		len = len + 1;
	}

	len = len / 2;

	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
