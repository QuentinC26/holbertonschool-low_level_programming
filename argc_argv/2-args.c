#include "main.h"
#include <stdio.h>

/**
 * main - Principal function of this code
 * @argc: Function for count the arguments
 * @argv: Function for place the arguments in the array
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
