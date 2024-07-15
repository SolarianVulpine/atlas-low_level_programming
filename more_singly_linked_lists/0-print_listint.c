#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint- gets the number of elements
*
* @h: the list in question
*
* Return: number of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t num_elements = 0;
	const listint_t *currentItem = h;

	for (; currentItem != NULL; currentItem = currentItem->next)
	{
		printf("%i\n", currentItem->n);
		num_elements++;
	}

	return (num_elements);
}
