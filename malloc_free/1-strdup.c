#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - will point to allocated memory containing a string copy
 *
 * @str: the sting in question
 *
 * Return: pointer to memory space containing string copy
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int length;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	copy = malloc(sizeof(char) * length + 1);

	if (copy == 0)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';

	return (copy);

}
