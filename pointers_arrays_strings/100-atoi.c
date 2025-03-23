#include "main.h"

/**
 * _atoi - function for convert a string to an integer
 * @s: The string with pointer
 * Return: 1 (error):
 */

int _atoi(char *s)
{

	int count;
	int len = 0;
	int result = 0;
	int sign = 0;

	sign = sign;
	if (s == 0)
	{
		return (1);
	}
	while (s[len] != '\0')
	{
		len++;
	}
	for (count = 0; count < len; count++)
	{
		if (s[count] == '+')
		{
			sign = 1;
		}
		if (s[count] == '-')
		{
			sign = -1;
		}
		if (s[count] >= '0' && s[count] <= '9')
		{
			result = result * 10 + (s[count] - '0');
		}
	}
	return (result);
}
