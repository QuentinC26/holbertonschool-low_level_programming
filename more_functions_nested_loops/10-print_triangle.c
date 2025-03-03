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
	int reverse;

	for (horizontal = 1; horizontal <= size; horizontal++)
	{
		for (vertical = 0; vertical < size - horizontal; vertical++)
		{
			_putchar(' ');
		}
		for (reverse = 0; reverse < horizontal; reverse++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
