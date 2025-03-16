#include "main.h"

/**
 * _strncat - function for concatenates two strings.
 * @src: The first string with pointer
 * @dest: The second string with pointer
 * @n: Designates the maximum number of characters
 * Return: 1 (error):
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int len = 0;
	int len_two = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len_two] != '\0')
	{
		len_two++;
	}
	for (count = 0; count < n && src[count]; count++)
	{
		dest[len_two] = src[count];
		len_two++;
	}
	dest[len_two] = '\0';
	return (dest);
}
