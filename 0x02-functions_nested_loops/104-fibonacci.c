#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 fibonnacci numbers
 * starting with 1 and 2 followed by a new line
 * Return: always 0
 */

int main(void)
{
unsigned long f1 = 1;
unsigned long f2 = 2;
int count = 0;
unsigned long sum;
while (count < 98)
{
sum = f1 + f2;
printf("%lu", sum);
f1 = f2;
f2 = sum;
count++;
if (count != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
return (0);
}
