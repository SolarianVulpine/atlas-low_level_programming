#include <stdio.h>
#include <stdlib.h>

/**
* create_array - will initialize an array of characters and alocate
* memory for it before freeing that memory at the end of the function
*
* @size: the size to be allocated
* @c: the initializing char
*
* Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
	free(array);

}
