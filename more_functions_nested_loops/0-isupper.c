#include "main.h"

/**
 * _isupper - Function for check the uppercase character
 *@c: Variable for check the return zero or return one
 *Return: 0 (Success)
 */

int _isupper(int c)

{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c == 'A')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
return (0);
}
