#include "main.h"

/**
 * rev_string - Functions for reverse the string
 * @s: Variable with pointer.
 * Return: 1 (Error)
 */

void rev_string(char *s)
{
	char temporaire;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temporaire = s[start];
		s[start] = s[end];
		s[end] = temporaire;

		start++;
		end--;
	}
}
