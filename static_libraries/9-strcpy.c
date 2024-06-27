#include "main.h"

/**
 * _strcpy - should copy a string
 *
 * Description:
 *
 * @dest: destination
 * @src: source string
 *
 * Return: 0
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
