#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *leet - aims to switch specific characters for numbers
 *
 * @s: string involved
 *
 * Return: resulting string
 */

char *leet(char *s)
{
	int i;
	int j;
	char characters[60] = "AaEeOoTtLl";
	char digits[60] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; characters[j] != '\0'; j++)
		{
			if (s[i] == characters[j])
			{
				s[i] = digits[j / 2];
			}
		}
	}
	return (s);
}
