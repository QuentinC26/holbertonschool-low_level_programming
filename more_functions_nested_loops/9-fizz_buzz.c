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
		if (base % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if (base % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		if (base % 3 == 0 && base % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
			putchar('F');
                        putchar('i');
                        putchar('z');
                        putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else
		{
			printf("%d ", base);
		}
	}
	putchar('\n');
	return (0);
}
