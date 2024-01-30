#include "main.h"

/**
 * _strlen - will return the length of a string
 *
 * @s : pointer to string input
 *
 * Return : the string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
