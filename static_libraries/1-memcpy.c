#include "main.h"

/**
* _memcpy - this will copy memory area
*
* @dest: destination copied to
* @src: source copied from
* @n: provided amount of bytes
*
* Return: a pointer to memory aread
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
