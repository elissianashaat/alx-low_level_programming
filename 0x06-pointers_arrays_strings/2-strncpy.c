#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while(dest[i] != '\0')
{
dest[i] = 0;
i++;
}
i = 0;
while(src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
