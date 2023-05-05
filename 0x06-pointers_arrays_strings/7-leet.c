#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string that is encoded
 */

char *leet(char *s)
{
char *ss = s;
unsigned int i;
char letters[] = {'A', 'E', 'O', 'T', 'L'};
int numbers[] = {4, 3, 0, 7, 1};
while (*s)
{
for (i = 0; i < sizeof(letters) / sizeof(char); i++)
{
if (*s == letters[i] || *s == numbers[i] + 32)
{
*s = 48 + numbers[i];
}
}
s++;
}
return (ss);
}
