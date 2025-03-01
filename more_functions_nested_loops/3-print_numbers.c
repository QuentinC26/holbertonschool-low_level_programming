#include "main.h"

/**
 * print_numbers - Function for print the numbers from 0 at 9
 * @?: ???
 * Return: 1 (error)
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
