#include "main.h"

/**
 * _pow_recursion - Function for return the value of the power
 * @x: Variable for determinate the return
 * @y: Variable for dertminate the power of x
 * Return: 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	_pow_recursion(x, y - 1);
	return (x);
}
