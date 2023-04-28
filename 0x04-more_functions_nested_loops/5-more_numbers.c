#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 * you can only use _putchar 3 times
 * Return: 0 always
 */

void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j < 15; i++)
{
if (j >= 10)
{
_putchar('1');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
