#include "main.h"

/**
 * int _islower(int c) - int _islower(int c) is for check a lowercase letters
 * _islower - command for check a lowercase letters.
 * @c: - 'c' is a variable
 *
 * Return: 0 (Sucess)
 *
 */

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
