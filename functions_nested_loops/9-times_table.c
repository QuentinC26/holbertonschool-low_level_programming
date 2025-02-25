#include "main.h"

/**
 * times_table - Function for print the 9 times tables.
 * Return: 0 (Success)
 */

void times_table(void)

{
	int table;
	int vertical;

	for (table = 0; table <= 9; table++)
	{
		for (vertical = 0; vertical <= 9; vertical++)
		{
			_putchar(table * vertical + '0');
			_putchar('\n');
			_putchar(table * vertical + '1');
			_putchar('\n');
			_putchar(table * vertical + '2');
			_putchar('\n');
			_putchar(table * vertical + '3');
			_putchar('\n');
			_putchar(table * vertical + '4');
			_putchar('\n');
			_putchar(table * vertical + '5');
			_putchar('\n');
			_putchar(table * vertical + '6');
			_putchar('\n');
			_putchar(table * vertical + '7');
			_putchar('\n');
			_putchar(table * vertical + '8');
			_putchar('\n');
			_putchar(table * vertical + '9');
			_putchar('\n');
		}
	}
}
