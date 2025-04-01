#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_list - function for free a list_t list.
 *@head: the header of the node
 *Return: 1 (Error)
 */

void free_list(list_t *head)
{
	list_t *all_node = malloc(sizeof(list_t));

	*all_node = *head;
	free(all_node);
}