#include "main.h"

/**
 * print_last_digit - Declaration of last digit of number
 * @int: Variables for print the last digit of number
 * Return: 0 (Success)
 */

int print_last_digit(int)

{
	int digit;
	int number;

	number = digit % 10;
	if (number < digit)
	{
		_putchar(number);
		return (number);
	}
	return (0);
}
