#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 * @?: ???
 * Return: 1 (Error)
 */

void more_numbers(void)
{
	int times;
	int digit;
	int number;

	for (times = 0; times < 10; times++)
	{
		for (digit = '0'; digit <= '9'; digit++)
		{
			for (number = 10; number <= 14; number++)
			{
				_putchar(number);
			}
			_putchar(digit);
		}
	}
	_putchar (times);
}
