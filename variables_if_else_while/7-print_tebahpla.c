#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Success)
 *
 */

	int main(void)
	{
	char reverse_alphabet;

	for (reverse_alphabet = 'z'; reverse_alphabet <= 'a'; reverse_alphabet++)
		putchar(reverse_alphabet++);
	putchar('\n');
	return (0);
	}
