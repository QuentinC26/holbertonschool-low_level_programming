#include "main.h"

/**
 * _strlen - Function for return the length
 * @s: Variable with pointer
 * Return: 0 (Success)
 */

int _strlen(char *s)

{
	int length;

	while (s[length] != '\0')
	{
	length++;
	}
	return (*s);
}
