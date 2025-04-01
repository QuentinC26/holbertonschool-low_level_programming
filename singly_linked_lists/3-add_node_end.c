#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - function that adds a new node at the end of the list_t
 *@head: the header of the linked list
 *@str: the string where you want to retrieve its width
 *struct list_number_two : singly linked list
 *Return: 0 (Success)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_two = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (node_two == NULL)
	{
		free(node_two);
		return (NULL);
	}

	node_two->str = strdup(str);
	node_two->len = strlen(str);
	node_two->next = NULL;

	if (*head == NULL)
	{
		*head = node_two;
	}
	else
	{
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = node_two;
	}

	return (node_two);
}
