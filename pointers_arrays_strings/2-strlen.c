#include "main.h"

/**
 * _strlen - Function for return the length
 * @s: Variable with pointer
 * Return: 0 (Success)
 */

int _strlen(char *s)

{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
