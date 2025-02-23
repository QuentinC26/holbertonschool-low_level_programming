#include "main.h"

/**
*print_alphabet - Entry Point
*
*Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char repeat = 0, ten_alphabet;

while (repeat < 10)
{
for (ten_alphabet = 'a'; ten_alphabet <= 'z'; ten_alphabet++)
_putchar (ten_alphabet);
ten_alphabet++;
}
_putchar ('\n');
}
