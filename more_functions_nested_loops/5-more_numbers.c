#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 * @?: ???
 * Return: 1 (Error)
 */

void more_numbers(void)
{
	int times;
	int number;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
	_putchar('\n');
	}
}
