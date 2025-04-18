#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add a two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result (Success)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract a two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result (Success)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result (Success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result (Success)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder a two integers
 * @a: the first integer
 * @b: the second integer
 * Return: result (Success)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
