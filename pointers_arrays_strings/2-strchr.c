#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a char in a string
*
* @c: the character
* @s: the string
*
* Return: s, '\0'
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if ((*s) == c)
			return (s);
		s++;
	}

	if ((*s) == c)
		return (s);
	else
		return (NULL);

}