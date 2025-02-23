#include "main.h"

/**
*print_alphabet - Entry Point
*
*Return: 0 (Success)
*/

void print(void)
{
char repeat = 0, ten_alphabet;

while (repeat < 10)
{
ten_alphabet = 'a'; ten_alphabet <= 'z';
ten_alphabet++;
_putchar (ten_alphabet);
}
_putchar ('\n');
}
