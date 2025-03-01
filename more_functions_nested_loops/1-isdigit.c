#include "main.h"

/**
 * _isdigit - Function for check the digit
 * @c: Variable for check the digit
 * Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
