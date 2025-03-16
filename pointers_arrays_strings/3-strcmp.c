#include "main.h"

/**
 * _strcmp - Function for compare two string
 * @s1: string with pointer
 * @s2: string with pointer
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		if (s1[count] > s2[count])
		{
			return (1);
		}
	}
	if (s1[count] == '\0' && s2[count] != '\0')
	{
		return (-1);
	}
	if (s1[count] != '\0' && s2[count] == '\0')
	{
		return (1);
	}
	return (0);
}
