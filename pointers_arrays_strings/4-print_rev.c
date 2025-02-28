#include "main.h"

/**
 * print_rev - Function for prints the reverse strings
 * @?: ??
 * Return: 1 (error)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	for (; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
