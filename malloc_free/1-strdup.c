#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Function that returns a pointer to a newly allocated spaces
* @str: Characters with pointer
* Return: 0 (Success)
*/

char *_strdup(char *str)
{
	int length = 0;
	int count = 0;
	char *Memory;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	Memory = malloc(sizeof(char) * (length + 1));

	if (Memory == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < length; count++)
	{
		Memory[count] = str[count];
	}
	Memory[count] = '\0';
	return (Memory);
}
