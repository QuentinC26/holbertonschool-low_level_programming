#include "main.h"

/**
 * print_last_digit - Declaration of last digit of number
 * @number: Variables for print the last digit of number
 * Return: 0 (Success)
 */

int print_last_digit(int number)

{
	int last;

	last = number % 10;

	if (last < 0)
	{
		last = last * (-1);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}
