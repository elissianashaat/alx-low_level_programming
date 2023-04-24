#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
if (i != j && i < j)
{
putchar(i + '0');
putchar(j + '0');
if (j + i != 17)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
