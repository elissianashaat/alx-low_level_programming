#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up tp 1024
 * Return: always (success)
 */
int main(void)
{
int i;
int sum = 0;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0)
{
sum += i;
}
if (i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
