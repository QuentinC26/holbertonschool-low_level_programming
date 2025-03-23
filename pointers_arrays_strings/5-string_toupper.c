#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * @ptr: Pointer
 * Return: 1 (error)
 */

char *string_toupper(char *ptr)
{
	int letter;

	for (letter = 0; ptr[letter] != '\0'; letter++)
	{
		if (ptr[letter] >= 'a' && ptr[letter] <= 'z')
		{
			ptr[letter] = ptr[letter] - 32;
		}
	}
	return (ptr);
}
