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
		if (current->str[current->len - 1] == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", current->len);
			for (int i = 0; i < current->len; i++)

			{
				putchar(current->str[i]);
			}
			printf("\n");
		}
		current = current->next;
		current++;
	}

	return (count);
}
