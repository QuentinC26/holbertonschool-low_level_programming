#include "main.h"

/**
*print_alphabet - Entry Point
*
*Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char tenlines;
int alphabet;

for (alphabet = 0; alphabet < 10; alphabet++)
{
for (tenlines = 'a'; tenlines <= 'z'; tenlines++)
{
_putchar (tenlines);
}
_putchar ('\n');
}
}
