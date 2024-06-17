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
	char *ptr;

	unsigned int i;

	/**
	* requirement: if nmemb or size are 0 return NULL
	*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/**
	* multiply number of elements by size of the elements and store in 'i'
	* i = nmemb * size;
	* moving operation directly into malloc parenthesis
	* allocate memory using malloc and storing it in 'ptr'
	*/
	ptr = malloc(nmemb * size);

	/**
	* if the ptr is NULL or incalculable return NULL
	*/
	if (ptr == NULL)
		return (NULL);

	/**
	* set memory value to 0 and returns the poitner
	* memset (ptr, 0, i);
	* memset not allowed
	*/

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}