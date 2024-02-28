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
	void *ptr = malloc(b);
	if (ptr == NULL) 
	{
		printf("Memory allocation failed.\n");
		exit(98);
	}
	return ptr;
}

int main(void) 
{
	void *mem = malloc_checked(100);
	free(mem);
	return  0;
}
