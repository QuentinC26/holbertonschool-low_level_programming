#include "main.h"

/**
 * times_table - Function for print the 9 times tables.
 * Return: 0 (Success)
 */

void times_table(void)

{
	int horizontal;
	int vertical;
	int carre;

	for (horizontal = 0; horizontal <= 9; horizontal++)
	{
		for (vertical = 0; vertical <= 9; vertical++)
		{
			carre = horizontal * vertical;
			if (vertical == 0)
			{
				_putchar('0');
			}
			else if (carre <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(carre + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(carre / 10 + '0');
				_putchar(carre % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
