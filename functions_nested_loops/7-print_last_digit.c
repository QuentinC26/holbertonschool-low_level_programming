#include "main.h"

/**
 * print_last_digit - Declaration of last digit of number
 * @digit: Variables for print the last digit of number
 * Return: 0 (Success)
 */

int print_last_digit(int digit)

{
	int digit;
	int number;

	number = digit % 10;
	if (number < 0)
	{
	digit = digit * (-1);
	return (number);
	}
	else
	{
	return (number);
	}
}
