#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: the first string you want to combine
 * @s2: the second string you want to combine
 * @n: the first n bytes
 * Return: 1 (Error)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = 0;
	unsigned int length_two = 0;
	unsigned int count;
	unsigned int count_two;
	char *memory;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length])
		length++;
	while (s2[length_two])
		length_two++;
	if (n > length_two)
		n = length_two;
	memory = malloc(sizeof(char) * (length + (n + 1)));
	if (memory == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < length; count++)
	{
		memory[count] = s1[count];
	}
	for (count_two = 0; count_two < n; count_two++)
	{
		memory[count + count_two] = s2[count_two];
	}
	memory[count + count_two] = '\0';
	return (memory);
}
