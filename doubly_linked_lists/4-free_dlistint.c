#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - frees doubly linked list
*
* @head: head node in list
*/

void free_dlistint(dlistint_t *head)
{
	/**
     * dlistint_t *tmp = NULL;
     */

	for (; head != NULL; head = head->next)
	{
		free(head);
	}
}
