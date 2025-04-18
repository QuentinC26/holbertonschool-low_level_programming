#include "main.h"
#include <stddef.h>

/**
 *_puts_recursion - prints a string
 * @s: variable with pointer
 * Return: 1 (error)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
