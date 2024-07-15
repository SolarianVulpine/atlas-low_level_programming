#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds node at the beginning of nexted list
*
* @head: first element in list at any given time
* @str: string
*
* Return: address of added element, NULL if failure
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	new_element = (list_t *)malloc(sizeof(list_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->str = strdup(str);

	if (!new_element->str)
	{
		free(new_element->str);
		free(new_element);
		return (NULL);
	}

	new_element->len = _strlen(new_element->str);
	new_element->next = *head;

	*head = new_element;

	return (*head);
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

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
