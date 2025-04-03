#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strlen - function for copie the strlen command
 *@string: the string where you want to retrieve its width
 *Return: 0 (Success)
 */

int _strlen(const char *string)
{
	int count = 0;

	while (string[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 *add_dnodeint_end - function that adds a new node at the end of a dlistint.
 *@head: the header of the linked list
 *@n: integer
 *Return: 0 (Success)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *lastnode = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = new_node;
	}

	return (new_node);
}
