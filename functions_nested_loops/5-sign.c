#include "main.h"

/**
 * print_sign - Check the sign of the number.
 * @n: - 'n' is a variable number
 *
 * Return: 1 (Error)
 *
 */

int _print_sign(int n)

{
	if (n > 0)
	{
	_putchar ('+');
	return (1);
	}
	if (n == 0)
	{
	_putchar ('0');
	return (0);
	}
	if (n < 0)
	{
	_putchar ('-');
	return (-1);
	}
	return (0);
}
