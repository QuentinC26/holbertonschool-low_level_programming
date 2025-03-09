#include "main.h"

/**
 * puts2 - Function for prints every other character of a string.
 * @str: Variable with pointer
 * Return: 1 (error):
 */

void puts2(char *str)
{
	int number;

	for (number = 0; number == '\0'; number++)
	{
		if (number % 2 == 0)
		{
			_putchar(str[number - 1]);
			_putchar('\n');
		}
	}
}
