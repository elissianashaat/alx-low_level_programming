#include "main.h"

/**
 * times_table - prints the 9 times table
 * example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 */

void times_table(void)
{
int number, itsmult, product;
for (number = 0; number < 10; number++)
{
_putchar('0');
for (itsmult = 1; itsmult < 10; itsmult++)
{
_putchar(',');
_putchar(' ');
product = number * itsmult;
if (product <= 9)
{
_putchar(' ');
}
else
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
