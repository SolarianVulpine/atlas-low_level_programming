#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - will print the elements of linked list
*
* @h: first element
*
* Return: node count
*/

size_t print_list(const list_t *h)
{
	unsigned long count = 0;

	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}

	return (count);
}
