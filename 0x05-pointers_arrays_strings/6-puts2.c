#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every
 * other character of a string
 * @str: string to be printed as characters
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
