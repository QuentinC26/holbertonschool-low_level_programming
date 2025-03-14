#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that returns a pointer to a 2 dimensional array
 * @grid: This is column of the multidimensionnel array
 * @height: This is height of the multidimensionnel array
 * Return: 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL)
	{
		return;
	}
	if (height <= 0)
	{
		return;
	}
	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
