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
	int multiplie = 0;
	int number_one = 0;
	int number_two = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc >= 3)
	{
		number_one = atoi(argv[1]);
		number_two = atoi(argv[2]);
		multiplie = number_one * number_two;
		printf("%d\n", multiplie);
	}
	return (0);
}
