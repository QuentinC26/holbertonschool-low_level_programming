#include "main.h"

/**
 * _strncpy - Function for copies a string
 * @dest: string with pointer
 * @src: string with pointer
 * @n: variable for count the characters
 * Return: 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;
	int len = 0;

	while (src[len])
	{
		len++;
	}
	for (count = 0; count < n; count++)
	{
		if (src[count] < src[len])
		{
		dest[count] = 0;
		}
		dest[count] = src[count];
	}
	return (dest);
}
