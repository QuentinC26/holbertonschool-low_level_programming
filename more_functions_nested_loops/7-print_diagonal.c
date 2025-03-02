#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: Variable for that draws a diagonal line
 * Return: 1 (Error)
 */

void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('\\');
		}
	_putchar('\n');
	}
}
