#include "variadic_function.h"

/**
 * print_numbers - to print numbers and seperate them
 * @sep: separator
 * @n: no. of args
 * @...: int printed
 * Return: void
 */

void print_numbers(const char *sep, const unsigned int n, ...)
{
int i = n;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
{
printf("%d%s", va_arg(ap, int), i ?
		(sep ? sep : "") : "\n");
}
va_end(ap);
}
