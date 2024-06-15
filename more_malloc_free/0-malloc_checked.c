#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - will allocate memory, the task does not ask
* for free to be invoked so I did not include it in this function
*
* @b: variable
*
* Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
