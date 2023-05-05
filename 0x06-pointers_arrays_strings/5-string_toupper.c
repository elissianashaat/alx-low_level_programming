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
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
