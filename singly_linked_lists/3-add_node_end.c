#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds node to end of linked list
*
* @head: current first element in list
* @str: string
*
* Return: address of added element, NULL if failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *tmp_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
		}
		tmp_node->next = new_node;
	}
	return (new_node);
}

/**
* _strlen - will return the string length
*
* Description:
*
* @str: the provided string
*
* Return: the length of the string
*/

int _strlen(const char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
