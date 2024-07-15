#include "lists.h"
#include <stddef.h>

/**
* listint_len- gets the number of elements
*
* @h: the list in question
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;
	const listint_t *currentItem = h;

	for (; currentItem != NULL; currentItem = currentItem->next)
	{
		num_elements++;
	}

	return (num_elements);
}
