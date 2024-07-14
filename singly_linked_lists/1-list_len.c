#include "lists.h"
#include <stdio.h>

/**
* list_len - get the number of elements
*
* @h: linked list to check
*
* Return: num of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *iterator = h;

	while (*iterator != NULL)
	{
		iterator = iterator->next;
		count++;
	}

	return (count);
}
