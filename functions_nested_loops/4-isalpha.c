#include "main.h"

/**
 * int _isalpha(int c) - int _isaplha(int c) is for check a any letters
 * _isalpha(int c) - Check the any letters.
 * @c: - 'c' is a variable
 *
 * Return: 0 (Sucess)
 *
 */

int _isalpha(int c)

{
if (c <= 'a' && c >= 'z')
else if (c <= 'A' && c >= 'Z')
return (1);
else
return (0);
}
