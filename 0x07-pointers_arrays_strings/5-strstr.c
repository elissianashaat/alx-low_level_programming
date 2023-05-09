#include <stdio.h>
#include "main.h"

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
int i;
while (*haystack)
{
for (i = 0; needle[i] != '\0'; i++)
{
if (haystack[i] == needle[i])
{
return ();
}
i++;
}
haystack++;
}
return (0);
}
