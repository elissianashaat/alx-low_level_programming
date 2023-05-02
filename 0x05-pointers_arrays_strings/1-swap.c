#include <stdio.h>

/**
 * swap_int - function swaps two numbers
 * @a: value of first integer to be swapped
 * @b: value of second integer to be swapped
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
