#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: pointer
 * Return: true
 */

char *_strdup(char *str)
{
int i;
int j;
char *m;
i = 0;
if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
m = malloc(i * sizeof(char));
if (m == 0)
{
return (NULL);
}
else
{
for (j = 0; str[j]; j++)
{
m[j] = str[j];
}
}
return (m);
}
