#include "main.h"

/**
 * _isalpha - Check the any letters.
 * @c: - 'c' is a variable
 *
 * Return: 1 (Error)
 *
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
