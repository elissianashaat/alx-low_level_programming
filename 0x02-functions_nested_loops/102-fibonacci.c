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
int f1 = 1;
int f2 = 0;
int count, sum;
while (count < 50)
{
sum = f1 + f2;
printf("%d", sum);
f1 = f2;
f2 = sum;
count++;
if (count == 49)
{
_putchar('\n');
}
else
{
_putchar(',');
}
}
return (0);
}
