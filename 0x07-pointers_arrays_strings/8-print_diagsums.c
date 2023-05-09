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
for (i = 0; i < size; i++)
{

for (j = 0; j < i; j++)
{

