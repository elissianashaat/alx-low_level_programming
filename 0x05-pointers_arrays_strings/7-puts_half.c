#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half -prints half string
 * @str: string to be splitted
 * Return: void
 */

void puts_half(char *str)
{
int i;
int j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = j / 2; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
