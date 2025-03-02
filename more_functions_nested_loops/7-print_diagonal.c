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
	int cube;

	for (horizontal = 0; horizontal <= n; horizontal++)
	{
		for (vertical = 0; vertical <= n; vertical++)
		{
			cube = horizontal * vertical;
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				for (; cube < n; cube++)
				{
					_putchar('\\');
				}
			_putchar('\n');
			}
		}
	}
}
