#include "main.h"

/**
 * _sqrt_recursion - square root function
 * @n: int
 * @val: square root
 * Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - square root
 * @n: int
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else
{
return (-1);
}
}
