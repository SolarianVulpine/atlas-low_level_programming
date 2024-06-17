#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - this file is a personal recreation of the calloc function
 *
 * @nmemb: number of the elements?
 * @size: size of the elements
 *
 * Return: returns a pointer to allocate memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    /**
     * initializing variables and datatypes
     */
    char *array;
    unsigned int i;

    /**
     * requirement: if nmemb or size are 0 return NULL
     */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /**
     * multiply number of elements by size of the elements and store in 'i'
     */
    i = nmemb * size;

    /**
     * allocate memory using malloc and storing it in the array 'array'
     */
    array = malloc(i);

    /**
     * if the array is NULL or incalculable return NULL
     */
    if (array == NULL)
        return (NULL);

    /**
     * set memory value to 0 and returns the poitner
     * memset (array, 0, i);
     * memset not allowed
     */

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
