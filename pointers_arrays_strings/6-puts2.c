#include "main.h"

/**
 * puts2 - Function for prints every other character of a string.
 * @str: Variable with pointer
 * Return: 1 (error):
 */

void puts2(char *str)
{
	int n;

	for (n = 0; n != '\0'; n++)
	{
		if (n % 2 == 0)
		{
			_putchar (str[n]);
		}
	}
}
