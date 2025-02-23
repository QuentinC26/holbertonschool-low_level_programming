#include "main.h"

/**
*print_alphabet_x10 - print_alphabet_x10 10 times in the lowercase
*
*Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char a;
int t;

for (t = 0; t < 10; t++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar (a);
}
_putchar ('\n');
}
}
