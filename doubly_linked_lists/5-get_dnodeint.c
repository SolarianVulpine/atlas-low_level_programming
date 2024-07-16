#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - gets nth node of a doubly linked list
* @head: head node in list
* @index: position of node in list to get
*
* Return: address of node at index, NULL if node doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int nodeCount = 0;

	unsigned int targetIndex = index;

	if (targetIndex > 0 && tmp != NULL)
	{
		while (tmp != NULL)
		{
			nodeCount++;
			if (nodeCount == targetIndex)
			{
				return (tmp);
			}
			tmp = tmp->next;
		}
	}

	return (NULL);
}
