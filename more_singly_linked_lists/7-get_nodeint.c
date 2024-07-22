#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets nth node of linked list
 *
 * @head: first element of list
 * @index: position of node in list
 *
 * Return: node provided by index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int i;

	i = 0;

    if (head != NULL)
    {
        temp_node = head;
	    for (;temp_node != NULL; i++)
	    {
		    if (i < index)
            {
                temp_node = temp_node->next;
            }
            if (i == index)
            {
			    return (temp_node);
            }
	    }
    }
	return (NULL);
}
