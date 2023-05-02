#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints string in reverse
 * @str: string to be printed
 * Return: void
 */

void print_rev(char *str)
{
int i = 0;
while (str[i] != 0)
{
i++;
}
while (i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
