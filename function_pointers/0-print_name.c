#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that print a name
 * @name: Pointer of print name
 * @f: Function pointer
 * Return: 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	(f)(name);
}
