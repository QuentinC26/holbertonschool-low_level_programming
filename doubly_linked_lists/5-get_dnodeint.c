#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 *@head: the header of the node
 *@index: item to be retrieved from the list
 *Return: 1 (Error)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		return (NULL);
	}

	node->n = index;
	node->next = NULL;
	node->prev = NULL;

	while (head != NULL)
	{
		if (index == count)
		{
			return (node);
		}
		count++;
	}
	return (node);
}
