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
	char *memory;

	va_start(args, n);
	for (list = 0; list < n; list++)
	{
		memory = va_arg(args, char*);
		if (separator == NULL)
		{
			return;
		}
		if (list > 0)
		{
			printf("%s", separator);
		}
		if (memory == NULL)
		{
			printf("nil");
		}
		else
		{
		printf("%s", memory);
		}
	}
	va_end(args);
	printf("\n");
}
