#include <stdio.h>
#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;
r = 0;
while (*s)
{
for (r; accept[r]; r++)
{
if (*s = accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}
