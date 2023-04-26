#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the sum of even-valued fibonacci sequence not exceeding 4 million
 * Return: always 0
 */

int main(void)
{
unsigned long f1 = 0;
unsigned long f2 = 1;
int count = 0;
unsigned long sum;
unsigned long bsum = 0;
while (count < 4,000,000)
{
sum = f1 + f2;
if (sum % 2 == 0)
{
bsum +=sum;
}
f1 = f2;
f2 = sum;
count++;
if (count != 4,000,000)
{
printf(", ");
}
else
{
printf("\n");
}
}
printf("%lu", bsum);
return (0);
}
