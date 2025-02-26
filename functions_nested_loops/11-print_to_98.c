#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers
 * @n: Variable for the start of the print
 * Return: 0 (Success)
 */

void print_to_98(int n)

{
	int number;

	if (n <= 98)
	{
		for (number = n; number < 98; number++)
		printf("%d, ", number);
	}
	else
	{
		for (number = n; number > 98; number--)
		printf("%d, ", number);
	}
	printf("98\n");
}
