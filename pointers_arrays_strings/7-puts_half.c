#include "main.h"

/**
* puts_half - Function that prints half of a string
* @str: Variable with pointer
* Return: 1 (error):
*/

void puts_half(char *str)
{
	int argument = 0;
	int length = 0;
	int result;
	int begin;

	while (str[length] != '\0')
	{
		length++;
	}

	result = length / 2;
	begin = length - result;

	for (argument = begin; argument < length; argument++)
	{
		_putchar(str[argument]);
	}
	_putchar('\n');
}
