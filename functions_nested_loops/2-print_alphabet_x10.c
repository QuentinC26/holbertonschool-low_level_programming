#include "main.h"

/**
*print_alphabet - Entry Point
*Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char tenlines;
int alphabet;

for (tenlines = 0; tenlines < 10; tenlines++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar (tenlines);
}
_putchar ('\n');
}
}
