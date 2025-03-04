#include "main.h"

/**
 * _memcpy - Function for copy the memory area
 * @dest: Memory adress if want copy
 * @scr: Memory source adress
 * @n: Variable for the Array
 * Return: 0 (Success)
 */

char *_memcpy(char *dest, char *scr, unsigned int n)
{

	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = scr[c];
	}
	return (dest);
}
