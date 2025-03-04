#include "main.h"

/**
 * _memset - Function for fills the bytes on the memory
 * @.: ???
 * Return: 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{

    unsigned int c;
    
    for (c = 0; c < n; c++)
    {
        s[c] = b;
    }
    return (s);
}
