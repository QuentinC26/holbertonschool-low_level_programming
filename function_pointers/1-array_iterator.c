#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Function for executes a function given as a parameter
 * @array: Pointer for array
 * @size: Size of array
 * @action: Function pointer
 * Return: 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
