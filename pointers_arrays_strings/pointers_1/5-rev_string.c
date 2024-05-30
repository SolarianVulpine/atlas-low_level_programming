#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string
 *
 * Description:
 *
 * @s: the provided string
 *
 * Return: 0 upon success
 */

void rev_string(char *s)
{
	int i, j, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');

	for (length = 0; s[length] != '\0';)
	{
		length++;
	}

	for (j = length - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
