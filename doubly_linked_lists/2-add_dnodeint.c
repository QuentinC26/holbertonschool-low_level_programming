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
 *add_dnodeint - that adds a new node at the beginning of a dlistint_t list
 *@head: the header of the linked list
 *@n: variable of the structure
 *struct list_number_two : singly linked list
 *Return: 0 (Success)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
