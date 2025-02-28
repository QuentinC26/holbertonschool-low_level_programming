#include "main.h"

/**
 * rev_string - Functions for reverse the string
 * @s: Variable with pointer.
 * Return: 1 (Error)
 */

void rev_string(char *s)
{
	int lenght = 0;
	char temporaire;
	int start = 0;
	int end = 0;

	for (; *s != '\0'; s++)
	{
		lenght++;
	}
	while (start < end)
	{
		temporaire = s[start];
		s[start] = s[end];
		s[end] = temporaire;

		start++;
		end--;
	}
}
