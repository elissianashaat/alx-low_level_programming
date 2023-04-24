#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 'A';
int z = 0;
while (i < 'G')
{
putchar(i);
i++;
}
while (z < 10)
{
putchar(z + '0');
z++;
}
putchar('\n');
return (0);
}
