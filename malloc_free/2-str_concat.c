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
	int s1_length, s2_length, new_length = 0;

	if (s1 != NULL)
	{
		s1_length = length_finder(s1);
	}

	if (s2 != NULL)
	{
		s2_length = length_finder(s2);
	}

	new_length = s1_length + s2_length + 1;

	newstr = malloc(sizeof(char) * new_length);

	if (newstr == NULL || s1 == NULL || s2 == NULL)
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

/**
* length_finder - homebrew strlen function for string length
*
* @string: the string to get the length from
*
* Return: the string's length
*/

int length_finder(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; )
	{
		i++;
	}

		return (i);
}
