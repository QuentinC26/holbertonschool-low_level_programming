#include "main.h"

/**
 * _memset - Function for fills the bytes on the memory
 * @b: Variable for have a constant byte
 * @s: Variable with pointer
 * @n: Variable for the array
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
