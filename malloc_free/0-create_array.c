#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - aims to create arr of chars and initialize
 *
 * @size: num of bytes to allocate
 * @c: initiallizer
 *
 * Return: pointer to arr, null if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size ==  0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i =  0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
