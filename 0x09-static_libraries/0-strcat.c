#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates
 * two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string at @dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i++] = src[j];
j++;
}
return (dest);
}
