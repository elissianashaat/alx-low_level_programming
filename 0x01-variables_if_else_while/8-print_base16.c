#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 'a';
int z = 0;
while (z < 10)
{
putchar(z + '0');
z++;
}
while (i < 'g')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
