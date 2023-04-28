#include "main.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100 followed by a new line
 * numbers that are multiples of 3 print fizz
 * numbers that are multiples of 5 prit buzz
 * numbers that are multiples of 3 and 5 print fizzbuzz
 * each number and word to be seperated by space
 * Return: 0 always
 */

int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
