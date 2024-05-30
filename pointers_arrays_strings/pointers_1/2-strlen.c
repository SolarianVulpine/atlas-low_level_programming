#include "main.h"

/**
 * _strlen - will return the string length
 *
 * Description:
 *
 * @s: the provided string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;

	return (i);
}
