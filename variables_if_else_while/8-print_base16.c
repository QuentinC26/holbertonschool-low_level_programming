#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 *
 */

	int main(void)
	{
	int base_16;

	for (base_16 = '0'; base_16 <= '9'; base_16++)
		putchar(base_16);
	for (base_16 = 'a'; base_16 <= 'e'; base_16++)
		putchar(base_16);
	putchar('\n');
	return (0);
	}
