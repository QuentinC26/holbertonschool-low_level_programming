#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index -  that searches for an integer
 * @array: Pointer for array
 * @size: Size of array
 * @cmp: Function pointer
 * Return: 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
		{
			return (count);
		}
	}
	return (-1);
}
