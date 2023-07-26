#include "variadic_functions.h"

/**
 * print_strings - function to prints strings
 * @sep: seperator
 * @n: no. of args
 * @...: strings printed
 * Return: void
 */

void print_strings(const char *sep, const unsigned int n, ...)
{
int i = n;
char *s;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
{
printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
i ? (sep ? sep : "") : "\n");
}
va_end(ap);
}
