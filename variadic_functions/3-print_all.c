#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Always 0.
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int count = 0;
	char *s = 0;

	va_start(args, format);
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				if (!s)
				{
					s = "(nil)";
				}
				printf("%s", va_arg(args, char *));
				break;
			default:
				count++;
				continue;
		}
		if (format[count + 1] != '\0')
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
	va_end(args);
}
