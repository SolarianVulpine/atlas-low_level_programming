#include <stdio.h>

/**
 * _strcpy - Copies a string from source to destinat
 *
 * @dest: Pointer to the destination buffer.
 *
 * @src:  Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
