#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - function that returns the number of elements in a linked
 *@h: Head of the list to print
 *Return: 0 (Success)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
