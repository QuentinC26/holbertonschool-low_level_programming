#include "main.h"

/**
 * _print_rev_recursion - Function for prints a reverse string
 * @s: variable with pointer
 * Return: 1 (Error)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
    {
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
