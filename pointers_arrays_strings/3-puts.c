#include "main.h"

/**
 * _puts - Function for that prints a string
 * @str: Name of the variable with pointer
 * Return: 1 (error)
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
