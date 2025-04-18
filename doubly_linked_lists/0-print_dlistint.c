#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - function that prints all the elements of a dlistint list
 *@h: Head of the list to print
 *Return: 0 (Success)
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
