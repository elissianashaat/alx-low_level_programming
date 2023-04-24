#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 'a';
int z = 'A';
while (i <= 'z' && z <= 'Z')
{
putchar(i);
putchar(z);
i++;
z++;
}
putchar('\n');
return (0);
}
