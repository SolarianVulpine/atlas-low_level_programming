#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_nodeint - adds node to beginning of linked list
*
* @head: current first element in list
* @n: int to duplicate for prepended element
*
* Return: address of added element, NULL if failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
