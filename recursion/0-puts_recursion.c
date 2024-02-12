#include "main.h"
#include <stdio.h>

/*
 * _puts_recursion - Aims to print a provided string followed by a new line via recursion
 *
 * @s: the provided string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%d" , *s);
		_puts_recursion(s + 1);
	}
	printf("\n");
}
