#include "main.h"
#include <stdio.h>

/*
 * _puts_recursion- Aims to print a string then \n via recursion
 *
 * @s: the provided string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
