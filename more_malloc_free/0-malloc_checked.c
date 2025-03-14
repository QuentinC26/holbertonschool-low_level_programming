#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocate memory using malloc
 * @b: variable for malloc
 * Return: 1 (Error)
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
