#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of an array of integers
 * @a: Variable with pointer
 * @n: Element of the array of integers
 * Return: 1 (error):
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
