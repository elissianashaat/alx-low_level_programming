#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - function that
 * change all lower case to upper case
 * @s: pointer
 * Return: n
 */

char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
i++;
}
}
return (s);
}
