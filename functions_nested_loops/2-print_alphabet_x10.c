#include "main.h"

/**
*print_alphabet - Entry Point
*
*Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char tenlines;

while (tenlines < 10)
{
for (tenlines = 'a'; tenlines <= 'z'; tenlines++)
_putchar (tenlines);
}
_putchar ('\n');
}
