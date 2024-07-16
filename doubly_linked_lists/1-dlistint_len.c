#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* dlistint_len - gets length of doubly linked list
*
* @h: head node in list
*
* Return: lenth of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *temp_node = h;

	if (h == NULL)
	{
		return (0);
	}

	while (temp_node != NULL)
	{
		temp_node = temp_node->next;
		node_count++;
	}

	return (node_count);
}
