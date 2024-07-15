#include "lists.h"
#include <stdio.h>

/**
* listint_len - gets number of elements in a linked list
*
* @h: linked list to check
*
* Return: number of elements in list
*/

size_t listint_len(const listint_t *h)
{
	size_t element_num = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		element_num++;
	}

	return (element_num);
}
