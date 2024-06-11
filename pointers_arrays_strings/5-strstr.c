#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer to beginning of string or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *haystack_i, *needle_i;

	if (*needle == '\0')
	{
		return (haystack);
	}
	haystack_ptr = haystack;

	while (*haystack_ptr)
	{
		haystack_i = haystack_ptr;
		needle_i = needle;

		while (*haystack_i && *needle_i && *haystack_i == *needle_i)
		{
			haystack_i++;
			needle_i++;
		}

		if (*needle_i == '\0')
		{
			return (haystack_ptr);
		}
		haystack_ptr++;
	}
	return (0);
}
