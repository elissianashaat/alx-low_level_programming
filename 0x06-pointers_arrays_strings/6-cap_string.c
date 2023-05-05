#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - function capatilize all
 * words of a string
 * @s: string to be capitalized
 * Return: pointer to the changed string
 */

char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
while (!(s[i] >= 97 && s[i] <= 122))
{
i++;
if (
s[i - 1] == ' ' ||
s[i - 1] == '\t'||
s[i - 1] == '\n'||
s[i - 1] == ',' || 
s[i - 1] == ';' ||
s[i - 1] == '.' || 
s[i - 1] == '!' ||
s[i - 1] == '?' || 
s[i - 1] == '"' ||
s[i - 1] == ')' ||
s[i - 1] == '(' || 
s[i - 1] == '{' ||
s[i - 1] == '}' || 
i == 0)
{
i -= 32;
}
}
i++;
}
return (s);
}
