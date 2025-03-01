#include "main.h"

/**
 * _isdigit - Function for check the digit
 * @c: Variable for check the digit
 * Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'b')
	{
		return (0);
	}
	else if (c > '9')
	{
		return (0);
	}
return (1);
}
