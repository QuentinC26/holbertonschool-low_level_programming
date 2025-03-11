#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Function that creates an array of chars
* @size: Function for manage the size of malloc
* @c: Characters in the code
* Return: 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int line;
	char *new_array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (new_array == 0)
	{
		return (NULL);
	}
	for (line = 0 ; line < size; line++)
	{
		new_array[line] = c;
	}
	return (new_array);
}

