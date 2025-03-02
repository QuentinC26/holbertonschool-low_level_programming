#include "main.h"
#include "stdio.h"

/**
 * main - Function for realize Fizz Buzz
 * @???: ???
 * Return: 0 (Sucess)
 */

int main(void)
{

	int base;

	for (base = 1; base <= 100; base++)
	{
		if (base % 3 == 0 && base % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (base % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (base % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", base);
		}
	}
	putchar('\n');
	return (0);
}
