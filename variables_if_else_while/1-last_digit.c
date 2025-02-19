#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s Last digit of"\n, n "is" \n, "and is greater than 5")
	printf("%s Last digit of"\n, n "is" \n, "and is 0")
	printf("%s Last digit of"\n, n "is" \n, "and is less than 6 and not 0")
	return (0);
}
