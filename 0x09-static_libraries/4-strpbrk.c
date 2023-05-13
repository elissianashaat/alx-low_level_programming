#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry function
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: byte if matched else null
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i;
while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}
