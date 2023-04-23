#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t size = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < size; i++)
{
putchar(arr[i]);
}
return (0);
}
