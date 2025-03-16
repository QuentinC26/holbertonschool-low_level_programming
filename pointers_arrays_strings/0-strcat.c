#include "main.h"

/**
 * _strcat - function for concatenates two strings.
 * @src: The first string with pointer
 * @dest: The second string with pointer
 * Return: 1 (error):
 */

char *_strcat(char *dest, char *src)
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
	for (count = 0; count < len; count++)
	{
		dest[len_two] = src[count];
		len_two++;
	}
	dest[len_two] = '\0';
	return (dest);
}
