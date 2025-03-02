#include "main.h"

/**
 * print_diagonal - Function that prints a square line on the terminal
 * @size: Variable for that prints a square line
 * Return: 1 (Error)
 */

void print_square(int size)
{
        int c;

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
