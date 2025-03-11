#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array
 * @width: This is first string
 * @height: This is second string
 * Return: 0 (Success)
 */

int **alloc_grid(int width, int height)
{

	int count;
	int count_two = 0;
	int **memory;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	memory = malloc(sizeof(int *) * height);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < height; count++)
	{
		memory[count] = malloc(sizeof(int) * width);
		if (memory[count_two] == NULL)
		{
			for (; count_two < count; count_two++)
			{
				return (NULL);
			}
		}
		for (; count_two < width; count_two++)
		{
			memory[count][count_two] = 0;
		}
	}
	free(memory[count]);
	free(memory[count_two]);
	return (memory);
}
