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
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int new_length = s1_length + s2_length + 1;

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	newstr = malloc(sizeof(char) * new_length);

	if (newstr == NULL)
	{
		return (NULL);
	}

	strcpy(newstr, s1);
	strcat(newstr, s2);

	return (newstr);

}
