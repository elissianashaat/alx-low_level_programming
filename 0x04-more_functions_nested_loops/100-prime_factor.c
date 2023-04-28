#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root of x
 */

double _sqrt(double x)
{
float sqrt, tmp;
sqrt = x / 2;
tmp = 0;
while (sqrt != tmp)
{
tmp = sqrt;
sqrt = (x / tmp + tmp) / 2;
}
return (sqrt);
}

/**
 * largest_prime_number - finds and prints the
 * largest prime number of number (num)
 * @num: number to find
 */

void largest_prime_number(long int num)
{
int prmnum, larg;
while (num % 2 == 0)
{
num = num / 2;
}
for (prmnum = 3; prmnum <= _sqrt(num); prmnum++)
{
while (num % prmnum == 0)
{
num = num / prmnum;
larg = prmnum;
}
}
if (num > 2)
{
larg = num;
}
printf("%d\n", larg);
}
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
largest_prime_number(612852475143);
return (0);
}
