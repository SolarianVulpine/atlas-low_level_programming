#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - will concatenate two strings and malloc accordingly
*
* Description: "Prototype: char *string_nconcat(char *s1, char *s2,
* unsigned int n); The returned pointer shall point to a newly
* allocated space in memory, which contains s1, followed by the
* first n bytes of s2, and null terminated If the function fails,
* it should return NULL If n is greater or equal to the length of
* s2 then use the entire string s2 if NULL is passed, treat it as
* an empty string"
*
* @s1: the first string
* @s2: the second string
* @n: the variable amount of sn bytes to display
*
* Return: pointer to memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i;
	unsigned int s1_length, s2_length, new_length = 0;
    
    if (s1 != NULL)
	{
		s1_length = length_finder(s1);
	}
    else if (s1 == NULL)
    {
        s1 = " ";
    }

	if (s2 != NULL)
	{
		s2_length = length_finder(s2);
	}
      else if (s2 == NULL)
    {
        s2 = " ";
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
    
    if (n >= s2_length)
    {
        for (i = 0; i < s2_length; i++)
        {
            newstr[s1_length + i] = s2[i];
        }
    }
    else if (n < s2_length)
    {
        for (i = 0; i < n && i < s2_length; i++)
        {
            newstr[s1_length + i] = s2[i];
        }
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