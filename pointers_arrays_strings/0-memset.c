#include "main.h"
#include <stdio.h>

/**
 * *_memset - aims to fill the first 'n' bytes of memory with the constant 'b'
 *
 * @s: pointer to memory space
 * @b: the value to be assigned
 * @n: the number of bytes to be filled starting at s
 *
 * Return: pointer to the memory area in s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
