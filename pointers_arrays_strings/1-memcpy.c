#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - aims to copy the contents of 'n' bytes from memory area 'src' to 'dest'
 *
 * @dest: the destination for copied material
 * @src: the origin of copied material
 * @n: is the number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
