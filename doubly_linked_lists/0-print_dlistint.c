#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - prints all elements in doubly linked list
*
* @h: head
*
* Return: number of nodes in list
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *i = h;

	if (h == NULL)
	{
		return (0);
	}

	while (i != NULL)
	{
		count++;
		printf("%d\n", i->n);
		i = i->next;
	}

	return (count);
}
