#include "main.h"

/**
 * swap_int - Function for swap the value of two integers
 * @a: First integer number
 * @b: Second integer number
 * Return: 1 (Error)
 */

void swap_int(int *a, int *b)

{

	int replacement;

	replacement = *a;
	*a = *b;
	*b = replacement;
}
