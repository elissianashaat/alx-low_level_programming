#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
long unsigned int k;
long unsigned int result;
char *e;
result = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("error\n");
return (1);
}
}
result += atoi(e);
e++;
}
printf("%ld\n", result);
}
else
{
printf("0\n");
}
return (0);
}
