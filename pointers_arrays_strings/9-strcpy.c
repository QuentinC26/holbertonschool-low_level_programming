#include "main.h"

/**
 * _strcpy - n elements of an array of integers
 * @dest: Second string with pointer
 * @src: First string with pointer
 * Return: 1 (error):
 */

char *_strcpy(char *dest, char *src)
{
	int count;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (count = 0; count < length; count++)
	{
		dest[count] = src[count];
		dest[length] = '\0';
	}
	return (dest);
}
