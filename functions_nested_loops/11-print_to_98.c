#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers
 * @n: Variable for the start of the print
 * Return: 0 (Success)
 */

void print_to_98(int n)

{
	for (n = 0; n <= 98; n++)
	{	
		if (n == 0)
		{
			_putchar('0');
		}
		else if (n <= 98)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
		}
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
	}
	_putchar('\n');
}
