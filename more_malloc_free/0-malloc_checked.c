#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - aims to allocate memory
 *
 * @b: num of bytes to allocate
 *
 * Return: pointer to data
 */

void *malloc_checked(unsigned int b)
{
	void *data;

	data = malloc(b);

	if (data == NULL)
	{
		exit(98);
	}

	return (data);
}
