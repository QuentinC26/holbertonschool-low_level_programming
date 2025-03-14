#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array
 * @width: This is column of the multidimensionnel array
 * @height: This is height of the multidimensionnel array
 * Return: 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int count;
	int count_two;
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
		if (memory[count] == NULL)
		{
			for (count_two = 0; count_two < count; count_two++)
			{
				free(memory[count_two]);
			}
			free(memory);
			return (NULL);
		}
		for (count_two = 0; count_two < width; count_two++)
		{
			memory[count][count_two] = 0;
		}
	}
	return (memory);
}
