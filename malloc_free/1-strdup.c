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

	unsigned int i = 0;

	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copy = malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
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
