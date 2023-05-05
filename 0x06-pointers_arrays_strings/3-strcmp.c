#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 1 if true , 0 if not equal 
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0' && s2[j] != '\0')
{
if (i == j)
{
return (1);
}
else
{
return (0);
}
i++;
j++;
}
return (0);
}
