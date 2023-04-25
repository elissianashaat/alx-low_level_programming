#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int x = 0;
while (x < 10)
{
int y = 0;
while (y < 10)
{
int z = 0;
while (z < 10)
{
if (x != y && y != z && x < y && y < z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (x + y + z != 24)
{
putchar(',');
putchar(' ');
}
}
z++;
}
y++;
}
x++;
}
putchar('\n');
return (0);
}
