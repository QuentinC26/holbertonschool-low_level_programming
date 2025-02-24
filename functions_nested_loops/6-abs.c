#include "main.h"

/**
 * _abs - Declaration of function for compute the absolute value
 * @number - Variable for computes the absolute value
 * Return: 0 (Success)
 *
 */

int _abs(int number)

{
	if (number < 0)
	{
	number = number * (-1);
	}
	else
{
	number = number * (1);
}
	return (number);
}
