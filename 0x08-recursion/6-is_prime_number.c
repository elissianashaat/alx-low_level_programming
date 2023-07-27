#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function to find prime numbers
 * @oth: int
 * @n: it
 * Return: true or false
 */

int checkprime(int n, int oth);
int is_prime_number(int n)
{
return (checkprime(n, 2));
}

/**
 * checkprime - checks for primes
 * @n: int
 * @oth: int
 * Return: int
 */

int checkprime(int n, int oth)
{
if (oth >= n && n > 1)
{
return (1);
}
else if (n % oth == 0 || n <= 1)
{
return (0);
}
else
{
return (checkprime(n, oth + 1));
}
}
