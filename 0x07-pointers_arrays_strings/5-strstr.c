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
if (needle[i] == haystack[i])
{
return (needle);
}
i++;
}
haystack++;
}
return (0);
}
