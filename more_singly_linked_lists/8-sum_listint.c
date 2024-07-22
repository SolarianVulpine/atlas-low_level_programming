#include "lists.h"
#include <stdlib.h>

/**
* sum_listint()- sums a linked list
* @head: start of list
*
* Return: int
*/

int sum_listint(listint_t *head)
{
	listint_t *temp_node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp_node = head;
	while (temp_node != NULL)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
