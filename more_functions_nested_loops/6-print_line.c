#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: Variable for draws a straight line
 * Return: 1 (Error)
 */

void print_line(int n)
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
			_putchar('_');
		}
	_putchar('\n');
	}
}
