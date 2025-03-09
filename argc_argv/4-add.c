#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Principal Function for this code
 * @argc: Function for count the arguments in the code
 * @argv: Function for place the arguments in array
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int addition = 0;
	int number_one = 0;
	int number_two = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 9)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		number_one = atoi(argv[1]);
		number_two = atoi(argv[2]);
		addition = number_one + number_two;
		printf("%d\n", addition);
	}
	return (0);
}
