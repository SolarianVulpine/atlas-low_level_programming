#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 *
 * @head: first element in list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}