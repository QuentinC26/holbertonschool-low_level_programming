#include "main.h"
#include <stddef.h>

/**
 *_strchr - Function for locates a character in rev_string
 * @s: Variable with pointer
 * @c: Variable for the localisation
 * Return: 0 (Sucess)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (c == '\0')
		{
			return (s);
		}
	}
	return (NULL);
}
