#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of even-valued fibonacci
 * sequence not exceeding 4 million
 * Return: always 0
 */

int main(void)
{
unsigned long f1 = 0;
unsigned long f2 = 1;
unsigned long sum;
unsigned long bsum = 0;
while (1)
{
sum = f1 + f2;
if (sum > 4000000)
{
break;
}
if ((sum % 2) == 0)
{
bsum += sum;
}
f1 = f2;
f2 = sum;
}
printf("%lu\n", bsum);
return (0);
}
