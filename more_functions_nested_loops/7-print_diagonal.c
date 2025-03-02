#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: Variable for that draws a diagonal line
 * Return: 1 (Error)
 */

void print_diagonal(int n)
{
	int horizontal;
	int vertical;

	for (horizontal = 0; horizontal < 'n'; horizontal++)
	{
		for (vertical = 0; vertical < horizontal; vertical++)
		{
		_putchar(' ');
		}
		_putchar('\\');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
