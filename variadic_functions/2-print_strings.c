#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *@separator: the string to be printed between strings
 *@n: the number of strings passed to the function
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
		if (list > 1 && va_arg(args, char*) == NULL && separator == NULL)
		{
		printf("nil");
		}
		printf("%s", va_arg(args, char*));
	}
	va_end(args);
	printf("\n");
}
