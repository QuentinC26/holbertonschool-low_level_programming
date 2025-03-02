#include "main.h"

/**
 * print_triangle - Function for prints a triangle
 * @size: Variable for prints a triangle
 * Return: 1 (Error)
 */

void print_triangle(int size)
{

	int horizontal;
	int vertical;

	for (horizontal = 0; horizontal <= size; horizontal++)
	{
		for (vertical = 0; vertical <= horizontal; vertical++)
		{
			_putchar ('#');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar (' ');
	}
}
