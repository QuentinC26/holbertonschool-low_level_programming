#include "lists.h"
#include <stdio.h>

/**
 *print_list - function that prints all the elements of a list_t list
 *@h: Head of the list to print
 *Return: 0 (Success)
 */

size_t print_list(const list_t *h)
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
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}
