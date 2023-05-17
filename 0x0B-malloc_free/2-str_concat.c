#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - entry point
 * @s1: first string
 * @s2: second string
 * Return: true
 */

char *str_concat(char *s1, char *s2)
{
int i;
int j;
int k;
int s;
int f;
char *s3;
j = 0;
i = 0;
k = 0;
s = 0;
f = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
k = i + j;
s3 = malloc((k * sizeof(char)) + 1);
if (s3 == NULL)
{
return (NULL);
}
while (s < i)
{
s3[s] = s1[s];
s++;
}
while (s <= k)
{
s3[s] = s2[f];
s++;
f++;
}
return (s3);
}
