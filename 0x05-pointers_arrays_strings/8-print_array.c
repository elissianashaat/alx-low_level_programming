#include <stdio.h>
#include "main.h"

/**
 * print_array - function prints n elements of an array of integers
 * @n: is the number of elements of the array to be printed
 * @a: array of integers
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
