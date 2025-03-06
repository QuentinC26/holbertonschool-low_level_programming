#include "main.h"

/**
 * factorial - Function for return the factorial of given number
 * @n: Variable for determinate the return of the factorial
 * Return: 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		factorial(n - 1);
		return (n * factorial(n - 1));
	}
	return (n);
}
