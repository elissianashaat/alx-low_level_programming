#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *
 * create_array - create array of size size and assign c
 * Description: create array of size size and assign c
 * @size: size of array
 * @c: character to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *m;
if (size == 0 || m == NULL)
{
return (NULL);
}
m = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
m[i] = c;
}
return (m);
}
