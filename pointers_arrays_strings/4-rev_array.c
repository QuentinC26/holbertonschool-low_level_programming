#include "main.h"

/**
 * reverse_array -  Function that reverses the content of an array of integers
 * @a: Array with pointer
 * @n: Number of elements
 * Return: 1 (error)
 */

void reverse_array(int *a, int n)
{
	int count;
	int swap;

	for (count = 0; count < n / 2; count++)
	{
		swap = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = swap;
	}
}
