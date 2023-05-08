#include <stdio.h>
#include "main.h"

/**
 * memcpy - function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with n byted change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int j;
for (j = 0; n > 0; j++)
{
dest[j] = src[j];
n--;
}
return (dest);
}
