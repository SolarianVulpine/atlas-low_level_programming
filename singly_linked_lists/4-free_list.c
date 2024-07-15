#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * 
 * @head: first element in list
 */

void free_list(list_t *head)
{
	list_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
