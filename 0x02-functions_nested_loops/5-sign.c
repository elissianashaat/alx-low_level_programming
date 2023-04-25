#include "main.h"

/**
 * print_sign -prints the sign of a number
 * @n: takes integer type input for a function
 *Return: 1 for positive number, -1 for negative num, 0 for anything else
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
