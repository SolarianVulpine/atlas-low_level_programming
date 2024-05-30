#include <stdio.h>
#include "main.h"

/**
 * _puts - aims to print a string followed by a new line
 *
 * Description: utilizes an array loop to identify the value of
 * each character space. then plugs that value into putchar
 *
 * @str: the provided string
 *
 * Return: 0 upon success
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
