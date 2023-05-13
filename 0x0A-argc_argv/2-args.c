#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: string value
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", argv[i]);
}
}
