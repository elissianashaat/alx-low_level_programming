#include <stdio.h>
#include <string.h>

/**
 * _strlen - finds the length of string
 * @s: the string to get the length of
 * Return: the length of @str
 */

int _strlen(char *s)
{
int p = 0;
while (*s != '\n')
{
p++;
}
return (p);
}
