#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 'a'; j < 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}

