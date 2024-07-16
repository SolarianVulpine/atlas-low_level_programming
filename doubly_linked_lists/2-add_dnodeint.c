#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint - adds new node to doubly linked list
*
* @head: head node in list
* @n: n for added node
*
* Return: address of new element, NULL on failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node;

	if (head == NULL)
	{
		return (NULL);
	}

	temp_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!temp_node)
		return (NULL);

	temp_node->n = n;
	temp_node->prev = NULL;
	temp_node->prev = NULL;

	if (!*head)
	{
		*head = temp_node;
		return (*head);
	}

	temp_node->next = *head;
	((*head)->prev) = temp_node;

	*head = temp_node;

	return (*head);
}
