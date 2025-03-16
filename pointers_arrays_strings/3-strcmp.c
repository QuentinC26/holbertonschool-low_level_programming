#include "main.h"

/**
 * _strcmp - Function for compare two string
 * @s1: string with pointer
 * @s2: string with pointer
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
