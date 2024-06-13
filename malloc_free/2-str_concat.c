#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - will concatentate two strings while also
* allocating memory to contain the two strings
*
* @s1: the first string
* @s2: the second string
*
* Return: a pointer to the new memory space of the strings
*/

char *str_concat(char *s1, char *s2)
{
	char *newstr;

	int i;

	int s1_length = 0;

	int s2_length = 0;

	int new_length = 0;

	if (s1 != NULL)
	{
		for (s1_length = 0; s1[s1_length]!= '\0'; s1_length++);
	}

	if (s2 != NULL)
	{
		for (s2_length = 0; s2[s2_length]!= '\0'; s2_length++);
	}

	new_length = s1_length + s2_length + 1;

	newstr = malloc(sizeof(char) * new_length);

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_length; i++)
	{
		newstr[i] = s1[i];
	}

	for (i = 0; i < s2_length; i++)
	{
		newstr[s1_length + i] = s2[i];
	}

	newstr[new_length - 1] = '\0';

	return (newstr);

}
