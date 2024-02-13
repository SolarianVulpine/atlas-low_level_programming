#include "main.h"
#include <stdio.h>

/*
 * print_rev_recursion -  aims to reverse a string usingrecursion
 *
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
