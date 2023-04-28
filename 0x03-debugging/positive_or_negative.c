#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* positive_or_negative - Entry point
* @n: integer to check if its pos or neg
* Return: Always 0 (success)
*/

void positive_or_negative(int n)
{
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
}
