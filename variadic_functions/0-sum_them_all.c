#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: D
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int list = 0;
	int total = 0;

	va_start(args, n);
	for (list = 0; list < n; list++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
