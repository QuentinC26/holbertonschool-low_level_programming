#include "main.h"

/**
* puts_half - Function that prints half of a string
* @str: Variable with pointer
* Return: 1 (error):
*/

void puts_half(char *str)
{

	int number;

	for (number = 0; str[number] != '\0'; number++)
	{
		if (number >= 5 && number <= 9)
		{
			_putchar(str[number]);
		}
	}
	_putchar('\n');
}
