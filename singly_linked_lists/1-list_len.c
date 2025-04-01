#include "lists.h"
#include <stdio.h>

/**
 *list_len - function that return all the number of elements in a linked list_t
 *@h: Head of the list to print
 *Return: 0 (Success)
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
		}
		else
		{
			h = h->next;
		}
		count++;
	}
	return (count);
}
