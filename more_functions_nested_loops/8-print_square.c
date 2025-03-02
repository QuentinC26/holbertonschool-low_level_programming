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
	int c;

	for (horizontal = 0; horizontal <= 9; horizontal++)
	{
		for (vertical = 0; vertical <= 9; vertical++)
		{
			c = horizontal * vertical;
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				for (c = 0; c < size; c++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
