#include "main.h"

/**
 * print_most_numbers - Functions for prints number whitout 2 and 4
 * @?: ???
 * Return: 1 (Error)
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
