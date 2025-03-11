#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: This is first string
 * @s2: This is second string
 * Return: 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int length = 0;
	int length_two = 0;
	char *Memory;
	int count;
	int count_two;

	if (s1 == 0)
	{
		while (s1[length])
		{
		length++;
		}
	}
	if (s2 == 0)
	{
		while (s2[length_two])
		{
		length_two++;
		}
	}

	Memory = malloc(sizeof(char) * (length + (length_two + 1)));

	if (Memory == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < length; count++)
	{
		Memory[count] = s1[count];
	}
	for (count_two = 0; count_two < length_two; count_two++)
	{
		Memory[count + count_two] = s2[count_two];
	}
	Memory[count + count_two] = '\0';
	return (Memory);
}
