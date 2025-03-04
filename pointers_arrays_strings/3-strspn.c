#include "main.h"

/**
 * _strspn - Function for gets the length of a prefix substring
 * @s: Variable with pointer
 * @accept: Variable with pointer for the return
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	int str = 0;

	for (; *s != 0; s++)
	{
		str++;
	}
	if (*accept == *s)
	{
		return (*s);
	}
	return (*s);
}
