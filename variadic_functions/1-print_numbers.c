#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int list = 0;

	va_start(args, n);
	for (list = 0; list < n; list++)
	{
		if (list > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
	va_end(args);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
}
