#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry point
 * @a: pointer
 * @size: size
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1;
int sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
sum2 +=  a[i * size + (size -  i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
