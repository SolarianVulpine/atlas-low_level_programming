#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_noncat - will concatenate two strings and malloc accordingly
*
* Description: "Prototype: char *string_nconcat(char *s1, char *s2,

* unsigned int n); The returned pointer shall point to a newly

* allocated space in memory, which contains s1, followed by the
*  first n bytes of s2, and null terminated If the function fails,
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
	int i;

	char *newstr;

	int s1_length, new_length = 0;

	size_t n_s2_length = (s2 != NULL)? length_finder(s2) : 0;

	s1_length = (s1!= NULL)? length_finder(s1) : 0;
	/**
	 * s2_length = (s2 != NULL)? n_s2_length : 0;
	 */
	s2_length = (s2!= NULL)? length_finder(s2) : 0;
	/**
	 * new_length = s1_length + ((n >= n_s2_length)? n_s2_length : n) + 1;
	 */
	new_length = s1_length + n + 1;

	newstr = malloc(sizeof(char) * new_length);

	if (newstr == NULL || s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	for (i = 0; i < s1_length; i++)
	{
		newstr[i] = s1[i];
	}

	/**
	 * for (i = 0; i < (n >= n_s2_length)? n_s2_length : n; i++)
	 */
	/**
	 * for (i = 0; i < n && s2[i]!= '\0'; i++)
	 */
	/**
	 * for (unsigned int i = 0; i < n && s2[i]!= '\0'; i++)
	 */
	for (; i < n && s2[i]!= '\0'; i++)
	{
		newstr[s1_length + i] = s2[i];
	}
	for (; i < s2_length; i++, s1_length++)
    {
        newstr[s1_length + i] = s2[i];
    }
	newstr[new_length - 1] = '\0';

	return (newstr);

}

/**
* length_finder - homebrew length_finder function for string length
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
