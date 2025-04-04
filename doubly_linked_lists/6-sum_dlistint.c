#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *sum_dlistint - function that returns the nth node of a dlistint_t
 *@head: the header of the node
 *Return: 1 (Error)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	if (head == NULL)
	{
		return (0);
	}

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
