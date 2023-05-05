#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n--; i++)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
