#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Only function allowed in the code
 * @argc: Integer for count the arguments
 * @argv: Char with pointer for put the arguments in the array
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	int (*operation)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
