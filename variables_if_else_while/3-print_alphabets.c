#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 */

int main(void)
	{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	putchar(v);
	for (v = 'A'; v <= 'Z'; v++)
	putchar(v);
	putchar('\n');
	return (0);
	}
