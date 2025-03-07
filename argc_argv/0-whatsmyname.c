#include "main.h"
#include <stdio.h>

/**
 * main - Principal function of this code
 * @argc: Variable integer for count the arguments number
 * @argv: Array for the pointers of characters who listed all arguments
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
