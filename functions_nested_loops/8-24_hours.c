#include "main.h"

/**
 * jack_bauer - Functions for print every minutes of day of Jack Bauer
 * Return: 0 (Success)
 */

void jack_bauer(void)

{
	int min;

	for (min = 00; min < 23; min++)
	{
		for (min = 00; min < 59; min++)
		_putchar('0');
		_putchar('0');
		_putchar(':');
		_putchar('0');
		_putchar('0');
		_putchar('\n');
	}
}
