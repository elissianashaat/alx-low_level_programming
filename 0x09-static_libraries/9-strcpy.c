#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest
 *  @dest: array to copy from src
 *  @src: array to be copied
 *  Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int j;
for (j = 0; src[j] != '\0'; j++)
{
dest[j] = src[j];
}
dest[j++] = '\0';
return (dest);
}
