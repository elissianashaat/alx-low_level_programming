#include "main.h"

/**
 * print_most_numbers -print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 * Return: 0 always
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 4 || i != 2)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
