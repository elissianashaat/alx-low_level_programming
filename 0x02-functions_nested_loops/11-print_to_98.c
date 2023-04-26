#include "main.h"

/**
 *  print_to_98 - print n to 98 counts
 *  seperated by comma ,
 *  followed by space
 *  should be printed in order
 *  @n: input number
 */

void print_to_98(int n)
{
if (n < 98)
{
for (int i = n; i < 98; i++)
{
printf("%d, ", i);
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
_putchar('\n');
}
