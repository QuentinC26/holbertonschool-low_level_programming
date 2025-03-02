#include "main.h"

/**
 * print_square - Function that prints a square line on the terminal
 * @size: Variable for that prints a square line
 * Return: 1 (Error)
 */

void print_square(int size)
{
	int horizontal;
	int vertical;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (horizontal = 0; horizontal < size; horizontal++)
		{
			for (vertical = 0; vertical < size; vertical++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
