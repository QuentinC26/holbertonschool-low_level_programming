#include "main.h"

/**
 * times_table - Function for print the 9 times tables.
 * Return: 0 (Success)
 */

void times_table(void)

{
	int table;
	int column;

	for (table = 0; table <= 9, table ++)
	{
		for (column = 0; column <= 9, column ++)
		
			{	
				_putchar(table * column + '0');
				_putchar(table * column + '1');
				_putchar(table * column + '2');
				_putchar(table * column + '3');
				_putchar(table * column + '4');
				_putchar(table * column + '5');
				_putchar(table * column + '6');
				_putchar(table * column + '7');
				_putchar(table * column + '8');
				_putchar(table * column + '9');
			}
	}
}
