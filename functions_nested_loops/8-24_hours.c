#include "main.h"

/**
 * jack_bauer - Functions for print every minutes of day of Jack Bauer
 * Return: 0 (Success)
 */

void jack_bauer(void)

{
	int hours;
	int min;

	for (hours = 0; min < 23; min++)
	{
		for (min = 0; min < 59; min++)
		_putchar(hours + '0');
		_putchar(hours + '0');
		_putchar(':');
		_putchar(min + '0');
		_putchar(min + '0');
		_putchar('\n');
	}
}
