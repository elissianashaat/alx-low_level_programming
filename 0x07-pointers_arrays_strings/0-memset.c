#include <stdio.h>
#include "main.h"

/**
 * _memset - fills block of memory with specific value
 * @s: starting address to the memory area being filled
 * @b: described value
 * @n: number of bytes to be changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
