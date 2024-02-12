#include "main.h"

/*
 * _puts_recursion - Aims to print a provided string followed by a new line via recursion
 *
 * @s: the provided string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%s" , *s);
	}
	printf("\n")
}
