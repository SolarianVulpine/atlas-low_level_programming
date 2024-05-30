#include "main.h"

/**
 * print_rev - will print a string backwards
 *
 * Description: by gathering the length of the string via loop
 * i'm able to tell putchar to print the characters starting at
 * the end of the string, before the null, and decrease in value
 * until we have the string printed in reverse
 *
 * @s: the provided string
 *
 * Return: 0 on success
 */

void print_rev(char *s)
{
	int i, length = 0;

	for (; s[length] != '\0';)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
