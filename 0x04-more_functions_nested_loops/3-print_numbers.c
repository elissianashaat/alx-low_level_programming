#include "main.h"

/**
 *print_numbers - print 0 - 9
 *only using putchar twice
 *Return: always 0 
 */

void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
