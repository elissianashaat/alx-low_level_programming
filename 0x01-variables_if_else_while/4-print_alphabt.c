#include <stdio.h>
/**
* main - Entry point
* Description: 'print comb of numbers'
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 'a';
while (i <= 'z')
{
if (i == 'q' || i == 'e')
{
break;
}
else
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
