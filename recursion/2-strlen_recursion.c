#include "main.h"

/**
 * _strlen_recursion - Function for returns the lenght of the string
 * @s: Variable with pointer
 * Return: 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int index = 1;

	if (*s != '\0')
	{
		s++;
		index = index + _strlen_recursion(s);
		return (index);
	}
	else
	{
		return (*s);
	}
}
