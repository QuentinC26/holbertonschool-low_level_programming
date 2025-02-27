#include "main.h"

/**
 * _strlen - Function for return the length
 * @s: Variable with pointer
 * Return: 0 (Success)
 */

int _strlen(char *s)

{
	int length;

	for (*s = 0 ; *s != '\0'; (*s)++)
	{
	length = length + *s;
	}
	return (*s);
}
