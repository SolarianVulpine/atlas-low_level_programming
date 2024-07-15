#include "list.h"

/**
 * _strlen - will return the string length
 *
 * Description:
 *
 * @str: the provided string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
