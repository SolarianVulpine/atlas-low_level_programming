#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char *string;
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
     * allocate memory using malloc and storing it in the array 'string'
     */
    string = malloc(i);

    /**
     * if the array is NULL or incalculable return NULL
     */
    if (string == NULL)
        return (NULL);

    /**
     * set memory value to 0
     */
    memset (string, 0, i);

    /**
     * returns pointer
     */
    return (string);
}