#include "variadic_functions.h"

/**
 * format_char - format char
 * @sep: separator
 * @ap: argument ptr
 */

void format_char(char *sep, va_list ap)
{
printf("%s%c", sep, va_arg(ap, int));
}

/**
 * format_int - format integer
 * @sep: separator
 * @ap: argument ptr
 */

void format_int(char *sep, va_list ap)
{
printf("%s%d", sep, va_arg(ap, int));
}

/**
 * format_string - format string
 * @sep: separator
 * @ap: arg ptr
 */


