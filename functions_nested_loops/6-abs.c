#include "main.h"

/**
 * _abs - Declaration of function for compute the absolute value
 * int - Declaration of integer in the function
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
