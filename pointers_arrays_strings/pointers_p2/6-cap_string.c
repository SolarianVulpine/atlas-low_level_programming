#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * *cap_string - aims to capitalize words in the string
 *
 * @s: the string itself
 *
 * Return: resulting string
 */

char *cap_string(char *s)
{
	int i;
	int j;
	int a[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if ((s[i] >= 97) && (s[i] <= 122))
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i] == a[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}

