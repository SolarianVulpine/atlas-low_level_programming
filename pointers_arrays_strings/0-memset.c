#include "main.h"

/**
* _memset - this code will fill memory with a constant byte
*Description:
*
* @n: this is the provided amount of bytes
* @b: the constant byte
* @s: the pointer to the memory location
*
* Return: A pointer to memory area "s"
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
