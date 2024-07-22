#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head of linked list
 *
 * @head: first element of list
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node = NULL;
	int node_data;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	node_data = temp_node->n;
	*head = (*head)->next;

	free(temp_node);

	return (node_data);
}