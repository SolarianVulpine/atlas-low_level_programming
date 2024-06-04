#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - aims to exchange lowercase letters for uppercase
 *
 * @s: the string being altered
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 96) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
