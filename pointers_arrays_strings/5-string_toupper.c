#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - aims to exchange lowercase letters for uppercase
 *
 * Return: 0 on success
 */

char *string_toupper(char *)
{
int length = strlen(s);

for (int i = 0; i < length; i++)
	s[i] = toupper(s[i]);
}
