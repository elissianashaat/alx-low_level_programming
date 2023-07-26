#include "variadic_functions.h"

/**
 * format_char - format char
 * @separator: separator
 * @ap: argument ptr
 */

void format_char(char *separator, va_list ap)
{
printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - format integer
 * @separator: separator
 * @ap: argument ptr
 */

void format_int(char *separator, va_list ap)
{
printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_string - format string
 * @separator: separator
 * @ap: arg ptr
 */

void format_string(char *separator, va_list ap)
{
char *str = va_arg(ap, char *);
switch ((int)(!str))
{
case 1:
str = "(nil)";
}
printf("%s%s", separator, str);
}

/**
 * print_all - prints all
 * @format: the format string
 */
void print_all(const char * const format, ...)
{

