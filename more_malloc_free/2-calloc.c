#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - aims to allocate memory for an array inits to 0
 *
 * @nmemb: number of elements in array
 * @size: number of bytes for each element in array
 *
 * Return: allocated array, NULL if failure or if nmemb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total_size;
	unsigned char *byte_ptr;
	void *ptr;


	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
