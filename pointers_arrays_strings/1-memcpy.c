#include "main.h"
#include <stdio.h>

/**
 * _memcpy - aims to copy content of 'n' bytes from mem 'src' to 'dest'
 *
 * @dest: the destination for copy
 * @src: the origin of copy
 * @n: is the num of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *t = (char *)dest;
	char *s = (char *)src;

	for (i = 0; i < n; i++)
		t[i] = s[i];

	return (t);
}
