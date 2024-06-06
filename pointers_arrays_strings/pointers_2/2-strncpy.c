#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - aims to copy a string or mimic strncpy
 *
 * @dest : the destination string
 * @src : the source string to be copied
 * @n : the number of characters to copy
 *
 * Return: dest pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
